﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;

using Pixtro.Common;
using Pixtro.Emulation.Common;
using Pixtro.Client.Common;

namespace Pixtro.Client.Editor
{
	public partial class VirtualpadTool : ToolFormBase, IToolFormAutoConfig
	{
		[RequiredService]
		private IEmulator Emulator { get; set; }

		[ConfigPersist]
		public bool StickyPads { get; set; }

		[ConfigPersist]
		public bool ClearAlsoClearsAnalog { get; set; }
		
		private bool _readOnly;

		public override bool BlocksInputWhenFocused { get; } = false;

		private List<VirtualPad> Pads =>
			ControllerPanel.Controls
				.OfType<VirtualPad>()
				.ToList();

		public bool Readonly
		{
			get => _readOnly;
			set
			{
				_readOnly = value;
				Pads.ForEach(p => p.ReadOnly = value);
			}
		}

		protected override string WindowTitleStatic => "Virtual Pads";

		public VirtualpadTool()
		{
			StickyPads = true;
			InitializeComponent();
			Icon = Properties.Resources.GameControllerIcon;
		}

		private void VirtualpadTool_Load(object sender, EventArgs e)
		{
			CreatePads();
		}

		public void ClearVirtualPadHolds()
		{
			if (ClearAlsoClearsAnalog)
			{
				Pads.ForEach(pad => pad.Clear());
			}
			else
			{
				Pads.ForEach(pad => pad.ClearBoolean());
			}
		}

		public void BumpAnalogValue(int? x, int? y) // TODO: multi-player
		{
			Pads.ForEach(pad => pad.BumpAnalog(x, y));
		}

		private void CreatePads()
		{
			ControllerPanel.Controls.Clear();

			Type schemaType;
			try
			{
				schemaType = Pixtro.Common.ReflectionCache.Types.Where(typeof(IVirtualPadSchema).IsAssignableFrom)
					.Select(t => (SchemaType: t, Attr: t.GetCustomAttributes(false).OfType<SchemaAttribute>().FirstOrDefault()))
					.First(tuple => tuple.Attr?.SystemId == Emulator.SystemId)
					.SchemaType;
			}
			catch (Exception)
			{
				return;
			}

			var padSchemata = ((IVirtualPadSchema) Activator.CreateInstance(schemaType))
				.GetPadSchemas(Emulator, s => DialogController.ShowMessageBox(s))
				.ToList();

			if (VersionInfo.DeveloperBuild)
			{
				var buttonControls = Emulator.ControllerDefinition.BoolButtons;
				var axisControls = Emulator.ControllerDefinition.Axes;
				foreach (var schema in padSchemata) foreach (var controlSchema in schema.Buttons)
				{
					Predicate<string> searchSetContains = controlSchema switch
					{
						ButtonSchema => buttonControls.Contains,
						DiscManagerSchema => s => buttonControls.Contains(s) || axisControls.ContainsKey(s),
						_ => axisControls.ContainsKey
					};
					if (!searchSetContains(controlSchema.Name))
					{
						this.ModalMessageBox(
							$"Schema warning: Schema entry '{schema.DisplayName}':'{controlSchema.Name}' will not correspond to any control in definition '{Emulator.ControllerDefinition.Name}'",
							"Dev Warning");
					}
				}
			}

			ControllerPanel.Controls.AddRange(padSchemata.Select(s => (Control) new VirtualPad(s, InputManager)).Reverse().ToArray());
		}

		public void ScrollToPadSchema(string padSchemaName)
		{
			foreach (var control in ControllerPanel.Controls)
			{
				var vp = control as VirtualPad;
				if (vp == null)
				{
					continue;
				}

				if (vp.PadSchemaDisplayName == padSchemaName)
				{
					ControllerPanel.ScrollControlIntoView(vp);
				}
			}
		}

		public override void Restart()
		{
			if (!IsHandleCreated || IsDisposed)
			{
				return;
			}

			CreatePads();
		}

		protected override void UpdateAfter()
		{
			if (!IsHandleCreated || IsDisposed)
			{
				return;
			}

			Pads.ForEach(p => p.SetPrevious(null)); // Not the cleanest way to clear this every frame

			if (!Readonly && !StickyPads && !MouseButtons.HasFlag(MouseButtons.Left))
			{
				Pads.ForEach(pad => pad.Clear());
			}

			Pads.ForEach(pad => pad.UpdateValues());
		}

		private IController CurrentInput()
		{

			return null;
		}

		private IController PreviousFrame()
		{

			return null;
		}

		protected override void FastUpdateAfter()
		{
			// TODO: SetPrevious logic should go here too or that will get out of whack

			if (!Readonly && !StickyPads)
			{
				Pads.ForEach(pad => pad.Clear());
			}
		}

		private void PadsSubMenu_DropDownOpened(object sender, EventArgs e)
		{
			StickyMenuItem.Checked = StickyPads;
		}

		private void ClearAllMenuItem_Click(object sender, EventArgs e)
		{
			ClearVirtualPadHolds();
		}

		private void StickyMenuItem_Click(object sender, EventArgs e)
		{
			StickyPads ^= true;
		}

		private void PadBoxContextMenu_Opening(object sender, System.ComponentModel.CancelEventArgs e)
		{
			StickyContextMenuItem.Checked = StickyPads;
		}

		private void ExitMenuItem_Click(object sender, EventArgs e)
		{
			Close();
		}

		private void OptionsSubMenu_DropDownOpened(object sender, EventArgs e)
		{
			ClearClearsAnalogInputMenuItem.Checked = ClearAlsoClearsAnalog;
		}

		private void ClearClearsAnalogInputMenuItem_Click(object sender, EventArgs e)
		{
			ClearAlsoClearsAnalog ^= true;
		}
	}
}