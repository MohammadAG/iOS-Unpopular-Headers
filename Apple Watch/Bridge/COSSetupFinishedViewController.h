//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "COSBuddyController.h"
#import "PSYProgressObserverDelegate.h"

@class COSInitialSyncMonitor, COSSetupDeviceSyncView, NSString, PBBridgeProgressView, UIButton, UILabel;

@interface COSSetupFinishedViewController : UIViewController <PSYProgressObserverDelegate, COSBuddyController>
{
    _Bool _isDeviceActivated;
    _Bool _isRemotePreparedForInitialSync;
    _Bool _isSyncComplete;
    id <COSBuddyControllerDelegate> _delegate;
    UILabel *_titleLabel;
    PBBridgeProgressView *_progressView;
    COSSetupDeviceSyncView *_watchView;
    UILabel *_progress;
    UILabel *_appTitleLabel;
    UILabel *_appDetailLabel;
    UIButton *_doneButton;
    UIButton *_learnMoreButton;
    COSInitialSyncMonitor *_syncMonitor;
    long long _progressState;
    double _totalProgress;
}

+ (id)fakeBackButtonItemForDelegate:(id)arg1 withAction:(SEL)arg2;
@property(nonatomic) double totalProgress; // @synthesize totalProgress=_totalProgress;
@property(nonatomic) long long progressState; // @synthesize progressState=_progressState;
@property(retain, nonatomic) COSInitialSyncMonitor *syncMonitor; // @synthesize syncMonitor=_syncMonitor;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UILabel *appDetailLabel; // @synthesize appDetailLabel=_appDetailLabel;
@property(retain, nonatomic) UILabel *appTitleLabel; // @synthesize appTitleLabel=_appTitleLabel;
@property(retain, nonatomic) UILabel *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) COSSetupDeviceSyncView *watchView; // @synthesize watchView=_watchView;
@property(retain, nonatomic) PBBridgeProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isSyncComplete; // @synthesize isSyncComplete=_isSyncComplete;
@property(nonatomic) _Bool isRemotePreparedForInitialSync; // @synthesize isRemotePreparedForInitialSync=_isRemotePreparedForInitialSync;
@property(nonatomic) _Bool isDeviceActivated; // @synthesize isDeviceActivated=_isDeviceActivated;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)back:(id)arg1;
- (void)progressObserver:(id)arg1 didFinishActivity:(id)arg2 withError:(id)arg3;
- (void)progressObserverDidChangeProgress:(id)arg1;
- (void)progressObserverDidChangeState:(id)arg1;
- (void)_updateProgressUI;
- (_Bool)_isSyncComplete;
- (void)dismissSetup:(id)arg1;
- (void)updateLayout;
- (void)deviceDidPair:(id)arg1;
- (void)setupSyncMonitorIfNeeded;
- (void)continuePairedSync;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)checkHoldReleaseConditions;
- (void)finishedInitialSyncPrep;
- (void)finishedActivating;
- (_Bool)holdBeforeDisplaying;
- (void)learnMoreTapped:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

