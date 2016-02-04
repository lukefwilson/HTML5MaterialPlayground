// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "Voice.h"
#include "OnlineSubsystemUtils.h"
#include "MicPlayerController.generated.h"

/**
*
*/
UCLASS()
class HTML5_API AMicPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMicPlayerController(const FObjectInitializer& ObjectInitializer);

/*	virtual void Tick(float DeltaSeconds) override;

	bool IsEcho(uint8* Buffer, int32 BuffSize);

	UFUNCTION(BlueprintImplementableEvent)
		void MicEcho();

	TSharedPtr<class IVoiceCapture> VoiceCapture;
	class UAudioComponent* VoiceComp;

	TArray<uint8> RawCaptureData;
	int32 MaxRawCaptureDataSize;

	TArray<uint8> Remainder;
	int32 MaxRemainderSize;
	int32 LastRemainderSize;*/
};
