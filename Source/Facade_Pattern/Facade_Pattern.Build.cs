// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Facade_Pattern : ModuleRules
{
	public Facade_Pattern(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
