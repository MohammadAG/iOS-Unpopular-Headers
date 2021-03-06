//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "COSSetupPageViewController.h"

#import "COSBuddyController.h"

@class COSPhoneView, COSWatchView, NSString, UIButton, UILabel;

@interface COSUnlockConfirmationViewController : COSSetupPageViewController <COSBuddyController>
{
    UILabel *_titleLabel;
    COSPhoneView *_phoneView;
    COSWatchView *_watchView;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
    UILabel *_subDetailLabel;
    UIButton *_confirmButton;
    _Bool _mandatory;
    _Bool _completed;
}

+ (id)_fakeBackButtonItemForTarget:(id)arg1 withAction:(SEL)arg2;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic, getter=isMandatory) _Bool mandatory; // @synthesize mandatory=_mandatory;
- (void).cxx_destruct;
- (void)unlockPairingComplete:(id)arg1;
- (void)confirmed;
- (void)_updateLayout;
- (id)titleString;
- (void)loadView;
- (void)back:(id)arg1;
- (void)removeFromNavHierarchyOf:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

