﻿using System;

// TODO - kill this file (or renew the concept as distinct from the LuaSandbox?)
namespace Pixtro.Client.Common
{
	public static class EnvironmentSandbox
	{
		public static void Sandbox(Action callback)
		{
			// just a stub for right now
			callback();
		}
	}
}
