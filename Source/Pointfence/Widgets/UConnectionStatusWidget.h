// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UConnectionStatusWidget.generated.h"

class UWidgetAnimation;
/**
 * 
 */
UCLASS()
class POINTFENCE_API UUConnectionStatusWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Connection Status")
	void ShowConnected();

	UFUNCTION(BlueprintCallable, Category = "Connection Status")
	void ShowError();

	UFUNCTION(BlueprintCallable, Category = "Connection Status")
	void ShowWarning();

	UFUNCTION(BlueprintCallable, Category = "Connection Status")
	void ShowConnecting();

protected:
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* Connected;

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* Error;

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* Warning;

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* Connecting;

private:
	void PlayStatusAnimation(UWidgetAnimation* Animation);
};
