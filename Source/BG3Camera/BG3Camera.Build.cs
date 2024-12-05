// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BG3Camera : ModuleRules
{
	public BG3Camera(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
