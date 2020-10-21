using UnrealBuildTool;
using System.IO;

public class eXiSoundVis : ModuleRules
{
	public eXiSoundVis(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnforceIWYU = true;
        DefaultBuildSettings = BuildSettingsVersion.V2;

        PublicIncludePaths.AddRange(new string[] {
            //"eXiSoundVis/Public"
        });

        PrivateIncludePaths.AddRange(new string[] {
            //"eXiSoundVis/Private"
        });

        PublicDependencyModuleNames.AddRange(new string[] { "Engine", "Core", "CoreUObject", "InputCore", "RHI", "Kiss_FFT" });

        PublicDependencyModuleNames.Add("Kiss_FFT");
	}
}