// Fill out your copyright notice in the Description page of Project Settings.


#include "./UConnectionStatusWidget.h"

void UUConnectionStatusWidget::ShowConnected() {
    PlayStatusAnimation(Connected);
}

void UUConnectionStatusWidget::ShowError() {
    PlayStatusAnimation(Error);
}

void UUConnectionStatusWidget::ShowWarning() {
    PlayStatusAnimation(Warning);
}

void UUConnectionStatusWidget::ShowConnecting() {
    PlayStatusAnimation(Connecting);
}

void UUConnectionStatusWidget::PlayStatusAnimation(UWidgetAnimation* Animation)
{
    if (!Animation)
    {
        UE_LOG(LogTemp,Warning,TEXT("La animación del estado no está asignada."));
        return;
    }

    StopAllAnimations();
    PlayAnimation(Animation);
}