#nullable enable

namespace Pixtro.Emulation.Common
{
	public interface AxisConstraint
	{
		public string? Class { get; }

		public string? PairedAxis { get; }
	}
}
