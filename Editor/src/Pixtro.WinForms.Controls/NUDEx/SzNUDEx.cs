using System.ComponentModel;
using System.Drawing;
using System.Windows.Forms;

namespace Pixtro.WinForms.Controls
{
	/// <inheritdoc cref="Docs.NUD"/>
	public class SzNUDEx : NumericUpDown
	{
		[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
		public new bool AutoSize => base.AutoSize;

		[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
		public new Point Location => base.Location;

		[Browsable(false)]
		[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
		public new int TabIndex => base.TabIndex;
	}
}
