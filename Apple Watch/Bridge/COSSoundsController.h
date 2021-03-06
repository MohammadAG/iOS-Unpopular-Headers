//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "NACVolumeControllerDelegate.h"

@class NSString, PSSpecifier, UIImage;

@interface COSSoundsController : PSListController <NACVolumeControllerDelegate>
{
    id <NACVolumeController> _volumeController;
    UIImage *_volumeSliderDownDisabled;
    UIImage *_volumeSliderDownEnabled;
    UIImage *_hapticSliderDownDisabled;
    UIImage *_hapticSliderDownEnabled;
    PSSpecifier *_audioSlider;
    PSSpecifier *_audioMuteSwitch;
    PSSpecifier *_hapticSlider;
}

@property(retain, nonatomic) PSSpecifier *hapticSlider; // @synthesize hapticSlider=_hapticSlider;
@property(retain, nonatomic) PSSpecifier *audioMuteSwitch; // @synthesize audioMuteSwitch=_audioMuteSwitch;
@property(retain, nonatomic) PSSpecifier *audioSlider; // @synthesize audioSlider=_audioSlider;
@property(retain, nonatomic) UIImage *hapticSliderDownEnabled; // @synthesize hapticSliderDownEnabled=_hapticSliderDownEnabled;
@property(retain, nonatomic) UIImage *hapticSliderDownDisabled; // @synthesize hapticSliderDownDisabled=_hapticSliderDownDisabled;
@property(retain, nonatomic) UIImage *volumeSliderDownEnabled; // @synthesize volumeSliderDownEnabled=_volumeSliderDownEnabled;
@property(retain, nonatomic) UIImage *volumeSliderDownDisabled; // @synthesize volumeSliderDownDisabled=_volumeSliderDownDisabled;
@property(retain, nonatomic) id <NACVolumeController> volumeController; // @synthesize volumeController=_volumeController;
- (void).cxx_destruct;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)volumeControllerDidUpdateSystemMutedState:(id)arg1;
- (void)volumeControllerDidUpdateHapticIntensity:(id)arg1;
- (void)volumeControllerDidUpdateVolumeControlAvailibility:(id)arg1;
- (void)volumeControllerDidUpdateVolumeValue:(id)arg1;
- (void)setProminentHapticsEnabled:(id)arg1 specifier:(id)arg2;
- (id)prominentHapticsEnabled:(id)arg1;
- (id)isAudioMuted:(id)arg1;
- (void)setAudioMuted:(id)arg1 specifier:(id)arg2;
- (void)setHapticIntensity:(id)arg1 specifier:(id)arg2;
- (id)hapticIntensity:(id)arg1;
- (void)setAudioVolume:(id)arg1 specifier:(id)arg2;
- (id)audioVolume:(id)arg1;
- (void)updateAudioMuteSwitch;
- (void)updateHapticSliderWithHighlightedDownGlyph:(_Bool)arg1;
- (void)updateVolumeSliderWithHighlightedDownGlyph:(_Bool)arg1;
- (void)updateHapticIntensitySlider;
- (void)updateAudioVolumeSlider;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

