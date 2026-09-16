// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Pointfence : ModuleRules
{
    public Pointfence(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "HeadMountedDisplay" ,
            "WebSockets",
            "LidarPointCloudRuntime",
            "ProceduralMeshComponent" ,
            "Json",
            "JsonUtilities",
            "WebSockets",
            "Niagara",
            "UMG"
        });
    }
}
