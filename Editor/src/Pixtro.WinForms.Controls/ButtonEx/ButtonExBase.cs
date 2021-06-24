using System.ComponentModel;
using System.Windows.Forms;

namespace Pixtro.WinForms.Controls
{
	public abstract class ButtonExBase : Button
	{
		[Browsable(false)]
		[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
		public new int TabIndex => base.TabIndex;

		[Browsable(false)]
		[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
		public new bool UseVisualStyleBackColor => base.UseVisualStyleBackColor;
	}
}
