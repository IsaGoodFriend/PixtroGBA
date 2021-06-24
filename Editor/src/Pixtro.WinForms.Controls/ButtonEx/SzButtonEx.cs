using System.ComponentModel;
using System.Drawing;

namespace Pixtro.WinForms.Controls
{
	/// <inheritdoc cref="Docs.Button"/>
	public class SzButtonEx : ButtonExBase
	{
		[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
		public new bool AutoSize => base.AutoSize;

		[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
		public new Point Location => base.Location;
	}
}
