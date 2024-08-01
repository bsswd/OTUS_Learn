// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class OTUS_LearnTarget : TargetRules
{
	public OTUS_LearnTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
		ExtraModuleNames.Add("OTUS_Learn");
        RegisterModulesCreated();
    }

    private void RegisterModulesCreated()
    {
        ExtraModuleNames.AddRange(new string[] { "CustomConfig" });
    }
}