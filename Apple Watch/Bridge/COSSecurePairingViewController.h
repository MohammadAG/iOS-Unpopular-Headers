//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "COSPasscodeViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class COSPasskeyEntryViewController, COSSecurePairingHeader, NSMutableArray, NSString, NSTimer;

@interface COSSecurePairingViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, COSPasscodeViewControllerDelegate>
{
    NSMutableArray *_displayedDevices;
    NSTimer *_tableUpdateTimer;
    COSSecurePairingHeader *_headerView;
    COSPasskeyEntryViewController *_passkeyEntryController;
}

@property(retain, nonatomic) COSPasskeyEntryViewController *passkeyEntryController; // @synthesize passkeyEntryController=_passkeyEntryController;
@property(retain, nonatomic) COSSecurePairingHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSTimer *tableUpdateTimer; // @synthesize tableUpdateTimer=_tableUpdateTimer;
@property(retain, nonatomic) NSMutableArray *displayedDevices; // @synthesize displayedDevices=_displayedDevices;
- (void).cxx_destruct;
- (_Bool)shouldShowCancelButtonForPasscodeViewController:(id)arg1;
- (_Bool)passcodeViewController:(id)arg1 passcodeIsCorrect:(id)arg2;
- (void)passcodeViewController:(id)arg1 didFinishSettingUpPasscode:(id)arg2;
- (void)passcodeViewController:(id)arg1 passcodeViewIsVisible:(_Bool)arg2;
- (void)passcodeViewController:(id)arg1 wasDismissedWithReason:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)controllerCancelled:(id)arg1;
- (void)_reloadDataForUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

