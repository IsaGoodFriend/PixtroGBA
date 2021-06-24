﻿using System;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;

using Pixtro.Common.NumberExtensions;
using Pixtro.Emulation.Common;

namespace Pixtro.Client.Editor
{
	public partial class RegisterBoxControl : UserControl
	{
		public IDebuggable Core { get; set; }
		public GenericDebugger ParentDebugger { get; set; }

		private bool _suppressChangeEvents;
		private bool _canGetCpuRegisters;
		private bool _canSetCpuRegisters;

		public RegisterBoxControl()
		{
			InitializeComponent();
			AutoScroll = true;
		}

		public void UpdateValues()
		{
			if (Enabled)
			{
				var registers = Core.GetCpuFlagsAndRegisters();
				_suppressChangeEvents = true;

				foreach (var register in registers)
				{
					if (Controls.OfType<Panel>().Any(p => p.Name == "FlagPanel"))
					{
						foreach (var checkbox in Controls.OfType<Panel>()
							.First(p => p.Name == "FlagPanel")
							.Controls
							.OfType<CheckBox>())
						{
							if (checkbox.Name == register.Key)
							{
								checkbox.Checked = register.Value.Value == 1;
							}
						}
					}

					if (_canSetCpuRegisters)
					{
						foreach (var textBox in Controls.OfType<TextBox>())
						{
							if (textBox.Name == register.Key)
							{
								textBox.Text = register.Value.Value.ToHexString(register.Value.BitSize / 4);
							}
						}
					}
					else
					{
						foreach (var label in Controls.OfType<Label>())
						{
							if (label.Name == register.Key)
							{
								label.Text = register.Value.Value.ToHexString(register.Value.BitSize / 4);
							}
						}
					}
				}

				_suppressChangeEvents = false;
			}
		}

		public bool CanGetCpuRegisters
		{
			get
			{
				try
				{
					Core.GetCpuFlagsAndRegisters();
					return true;
				}
				catch (NotImplementedException)
				{
					return false;
				}
			}
		}

		public bool CanSetCpuRegisters
		{
			get
			{
				try
				{
					Core.SetCpuRegister("", 0);
					return true;
				}
				catch (NotImplementedException)
				{
					return false;
				}
				catch (Exception)
				{
					return true;
				}
			}
		}

		public void GenerateUI()
		{
			Controls.Clear();

			_canGetCpuRegisters = CanGetCpuRegisters;
			_canSetCpuRegisters = CanSetCpuRegisters;

			if (!_canGetCpuRegisters && !_canSetCpuRegisters)
			{
				ParentDebugger.DisableRegisterBox();
				Enabled = false;
			}

			var registers = Core.GetCpuFlagsAndRegisters();

			int y = UIHelper.ScaleY(0);

			var maxCharSize = registers.Where(r => r.Value.BitSize != 1).Max(r => r.Key.Length);
			var width = maxCharSize * (int)Font.Size;
			if (width < 20)
			{
				width = 20;
			}

			foreach (var register in registers.Where(r => r.Value.BitSize != 1))
			{
				Controls.Add(new Label
				{
					Text = register.Key,
					Location = new Point(UIHelper.ScaleX(5), y + UIHelper.ScaleY(2)),
					Size = new Size(UIHelper.ScaleX(width + 5), UIHelper.ScaleY(15))
				});

				if (_canSetCpuRegisters)
				{
					var t = new TextBox
					{
						Name = register.Key,
						Text = register.Value.Value.ToHexString(register.Value.BitSize / 4),
						Width = UIHelper.ScaleX(6 + ((register.Value.BitSize / 4) * 9)),
						Location = new Point(UIHelper.ScaleX(width + 10), y),
						MaxLength = register.Value.BitSize / 4,
						CharacterCasing = CharacterCasing.Upper
					};

					t.TextChanged += (o, e) =>
					{
						if (!_suppressChangeEvents)
						{
							try
							{
								if (t.Text != "")
								{
									Core.SetCpuRegister(t.Name, int.Parse(t.Text, System.Globalization.NumberStyles.HexNumber));
								}		
							}
							catch (InvalidOperationException)
							{
								t.Enabled = false;
							}
							catch (FormatException)
							{
							}
						}
					};

					Controls.Add(t);
				}
				else
				{
					Controls.Add(new Label
					{
						Name = register.Key,
						Text = register.Value.Value.ToHexString(register.Value.BitSize / 4),
						Size = new Size(UIHelper.ScaleX(6 + ((register.Value.BitSize / 4) * 9)), UIHelper.ScaleY(15)),
						Location = new Point(UIHelper.ScaleX(width + 12), y + 2)
					});
				}

				y += UIHelper.ScaleY(this.Font.Height + (_canSetCpuRegisters ? 10 : 4));
			}

			var flags = registers.Where(r => r.Value.BitSize == 1);

			if (flags.Any())
			{
				var p = new Panel
				{
					Name = "FlagPanel",
					Location = new Point(UIHelper.ScaleX(5), y),
					BorderStyle = BorderStyle.None,
					Size = new Size(UIHelper.ScaleX(240), UIHelper.ScaleY(23)),
					AutoScroll = true
				};

				foreach (var flag in registers.Where(r => r.Value.BitSize == 1).OrderByDescending(x => x.Key))
				{
					var c = new CheckBox
					{
						Appearance = Appearance.Button,
						Name = flag.Key,
						Text = flag.Key.Replace("Flag", "").Trim(), // Hack
						Checked = flag.Value.Value == 1,
						Location = new Point(UIHelper.ScaleX(40), y),
						Dock = DockStyle.Left,
						Size = new Size(UIHelper.ScaleX(23), UIHelper.ScaleY(23)),
						Enabled = _canSetCpuRegisters
					};

					c.CheckedChanged += (o, e) =>
					{
						if (!_suppressChangeEvents)
						{
							try
							{
								Core.SetCpuRegister(c.Name, c.Checked ? 1 : 0);
							}
							catch (InvalidOperationException) // TODO: This is hacky stuff because NES doesn't support setting flags!  Need to know when a core supports this or not, and enable/disable the box accordingly
							{
								_suppressChangeEvents = true;
								c.Checked = !c.Checked;
								_suppressChangeEvents = false;
								c.Enabled = false;
							}
						}
					};

					p.Controls.Add(c);
				}

				Controls.Add(p);
			}
		}
	}
}
