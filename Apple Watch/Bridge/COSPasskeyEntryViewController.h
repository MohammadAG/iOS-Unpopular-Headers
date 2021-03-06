//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class COSPinKeyView, NRDevice, NSString, NSTimer, UIActivityIndicatorView, UILabel, UITextField;

@interface COSPasskeyEntryViewController : UIViewController <UITextFieldDelegate>
{
    UILabel *_instructionLabel;
    COSPinKeyView *_pinKeyView;
    UIActivityIndicatorView *_activityView;
    UITextField *_passkeyField;
    NSTimer *_textChangedTimer;
    NRDevice *_device;
}

@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSTimer *textChangedTimer; // @synthesize textChangedTimer=_textChangedTimer;
@property(retain, nonatomic) UITextField *passkeyField; // @synthesize passkeyField=_passkeyField;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) COSPinKeyView *pinKeyView; // @synthesize pinKeyView=_pinKeyView;
@property(retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
- (void).cxx_destruct;
- (void)gotPinAndDevice:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)pressedCancel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

