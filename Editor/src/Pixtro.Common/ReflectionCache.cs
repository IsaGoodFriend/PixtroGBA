﻿using System;
using System.IO;
using System.Linq;
using System.Reflection;

namespace Pixtro.Common
{
	public static class ReflectionCache
	{
		private static readonly Assembly Asm = typeof(ReflectionCache).Assembly;

		public static readonly Version AsmVersion = Asm.GetName().Version!;

		private static readonly Lazy<Type[]> _types = new Lazy<Type[]>(() => Asm.GetTypesWithoutLoadErrors().ToArray());

		public static Type[] Types => _types.Value;

		/// <exception cref="ArgumentException">not found</exception>
		public static Stream EmbeddedResourceStream(string embedPath)
		{
			var fullPath = $"Pixtro.Common.{embedPath}";
			string[] stuff = Asm.GetManifestResourceNames();

			var value = Asm.GetManifestResourceStream(fullPath);

			if (value == null)
				throw new ArgumentException("resource at {fullPath} not found", nameof(embedPath));

			return value;
			
		}
	}
}
