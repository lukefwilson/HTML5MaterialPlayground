// Fill out your copyright notice in the Description page of Project Settings.

#include "HTML5.h"
#include "MicPlayerController.h"


AMicPlayerController::AMicPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
/*	MaxRawCaptureDataSize = 100 * 1024;
	RawCaptureData.AddUninitialized(MaxRawCaptureDataSize);

	MaxRemainderSize = 1 * 1024;
	LastRemainderSize = 0;
	Remainder.AddUninitialized(MaxRemainderSize);

	VoiceCapture = FVoiceModule::Get().CreateVoiceCapture();

	if (VoiceCapture.IsValid()) {
		VoiceCapture->Start();
		UE_LOG(LogTemp, Log, TEXT("VALID"));
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("NOT VALID"));
	}
	*/
}
/*
void AMicPlayerController::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if (VoiceCapture.IsValid()) {
		if (VoiceComp == NULL) {
			// UE_LOG(LogTemp, Log, TEXT("Create Voice Comp: %d hz"), VOICE_SAMPLE_RATE);
			VoiceComp = CreateVoiceAudioComponent(VOICE_SAMPLE_RATE);
			VoiceComp->AddToRoot();
			VoiceComp->Play();
		}

		if (VoiceComp) {
			USoundWaveStreaming* SoundStreaming = CastChecked<USoundWaveStreaming>(VoiceComp->Sound);
			uint32 totalVoiceBytes = 0;
			uint32 newVoiceDataBytes = 0;

			EVoiceCaptureState::Type captureState = VoiceCapture->GetCaptureState(newVoiceDataBytes);
			if (captureState == EVoiceCaptureState::Ok && newVoiceDataBytes > 0) {
				// UE_LOG(LogTemp, Log, TEXT("----- ONE BUFFER BEGIN ----"));

				totalVoiceBytes = newVoiceDataBytes + LastRemainderSize;
				RawCaptureData.Empty(MaxRawCaptureDataSize);
				RawCaptureData.AddUninitialized(totalVoiceBytes);

				if (LastRemainderSize > 0) {
					FMemory::Memcpy(RawCaptureData.GetData(), Remainder.GetData(), LastRemainderSize);
				}

				captureState = VoiceCapture->GetVoiceData(RawCaptureData.GetData() + LastRemainderSize, newVoiceDataBytes, newVoiceDataBytes);
				totalVoiceBytes = newVoiceDataBytes + LastRemainderSize;

				if (IsEcho(RawCaptureData.GetData(), totalVoiceBytes - LastRemainderSize)) {
					// UE_LOG(LogTemp, Log, TEXT("Echo!"));
					MicEcho();
				}

				//	if (captureState == EVoiceCaptureState::Ok && totalVoiceBytes > 0) {
				// send input to speakers
				// UE_LOG(LogTemp, Log, TEXT("Queueing raw data! %d"), totalVoiceBytes - LastRemainderSize);
				// SoundStreaming->QueueAudio(RawCaptureData.GetData(), totalVoiceBytes - LastRemainderSize);
				//	}
			}
		}
	}
}

bool AMicPlayerController::IsEcho(uint8* Buffer, int32 BuffSize) {
	if (BuffSize == 0) {
		return true;
	}

	const int32 IterSize = BuffSize / sizeof(uint8);

	double Total = 0.0f;
	for (int32 i = 0; i < IterSize; i++) {
		Total += Buffer[i];
	}

	const double Average = Total / IterSize;

	double SumMeanSquare = 0.0f;
	double Diff = 0.0f;
	for (int32 i = 0; i < IterSize; i++) {
		Diff = (Buffer[i] - Average);
		SumMeanSquare += (Diff * Diff);
	}

	double AverageMeanSquare = SumMeanSquare / IterSize;

	static double Threshold = 5600; // a little over 10k is resting. 5.6k is the peak of a click close to the mic. Lower == louder

	// UE_LOG(LogTemp, Log, TEXT("AvgMeanSqr: %f ---- Threshold: %f"), AverageMeanSquare, Threshold);

	return AverageMeanSquare < Threshold;
}

*/