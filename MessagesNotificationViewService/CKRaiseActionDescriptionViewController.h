//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCContentViewController.h"

@class UIImageView, UILabel;

@interface CKRaiseActionDescriptionViewController : NCContentViewController
{
    _Bool _raiseToTalk;
    UILabel *_label;
    UIImageView *_imageView;
}

+ (_Bool)_isSecureForRemoteViewService;
@property(nonatomic, getter=isRaiseToTalk) _Bool raiseToTalk; // @synthesize raiseToTalk=_raiseToTalk;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)_switchToSent:(id)arg1;
- (void)_switchToRecorded:(id)arg1;
- (void)_switchToRecording:(id)arg1;
- (void)_switchToRaiseToTalk:(id)arg1;
- (void)_switchToPlaying:(id)arg1;
- (void)_switchToRaiseToListen:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (void)dealloc;
- (id)init;

@end

