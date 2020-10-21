#pragma once
 
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

// Log Category
DECLARE_LOG_CATEGORY_EXTERN(LogeXiSoundVis, Log, All);

// Short Defines to faster debug
#define PrintLog(TextToLog) if(bShowLogDebug) UE_LOG(LogeXiSoundVis, Log, TextToLog)
#define PrintWarning(TextToLog) if(bShowWarningDebug) UE_LOG(LogeXiSoundVis, Warning, TextToLog)
#define PrintError(TextToLog) if(bShowErrorDebug) UE_LOG(LogeXiSoundVis, Error, TextToLog)
 
class FeXiSoundVisModule final : public IModuleInterface
{
public:
		
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};