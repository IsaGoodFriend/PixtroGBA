﻿using System;
using System.IO;

using Pixtro.Emulation.Common;

namespace Pixtro.Emulation.Cores.Nintendo.GBA
{
	public partial class MGBAHawk : IStatable
	{
		private byte[] _savebuff = new byte[0];

		public void SaveStateBinary(BinaryWriter writer)
		{
			IntPtr p = IntPtr.Zero;
			int size = 0;
			if (!LibmGBA.BizStartGetState(Core, ref p, ref size))
			{
				throw new InvalidOperationException("Core failed to save!");
			}

			if (size != _savebuff.Length)
			{
				_savebuff = new byte[size];
			}

			LibmGBA.BizFinishGetState(p, _savebuff, size);

			writer.Write(_savebuff.Length);
			writer.Write(_savebuff, 0, _savebuff.Length);

			// other variables
			writer.Write(IsLagFrame);
			writer.Write(LagCount);
			writer.Write(Frame);
		}

		public void LoadStateBinary(BinaryReader reader)
		{
			int length = reader.ReadInt32();
			if (length != _savebuff.Length)
			{
				_savebuff = new byte[length];
			}

			reader.Read(_savebuff, 0, length);
			if (!LibmGBA.BizPutState(Core, _savebuff, length))
			{
				throw new InvalidOperationException("Core rejected the savestate!");
			}

			// other variables
			IsLagFrame = reader.ReadBoolean();
			LagCount = reader.ReadInt32();
			Frame = reader.ReadInt32();
		}
	}
}
