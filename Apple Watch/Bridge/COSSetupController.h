//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "COSBuddyControllerDelegate.h"
#import "COSBuddyNavigationControllerDelegate.h"
#import "NRDevicePropertyObserver.h"
#import "UINavigationControllerDelegate.h"

@class COSBuddyNavigationController, COSBuddyWristSelectionController, COSGizmoCaptureViewController, COSPasscodeChoiceViewController, COSSoftwareUpdateController, NSMutableArray, NSString;

@interface COSSetupController : NSObject <UINavigationControllerDelegate, COSBuddyNavigationControllerDelegate, NRDevicePropertyObserver, COSBuddyControllerDelegate>
{
    _Bool hasSignedInToICloud;
    _Bool combinedMessagesSignInFailed;
    COSBuddyNavigationController *_navigationController;
    NSMutableArray *_buddyControllers;
    COSGizmoCaptureViewController *_pairingController;
    COSPasscodeChoiceViewController *_passcodeChoiceController;
    COSBuddyWristSelectionController *_wristController;
    id <COSBuddyController> _controllerDisplayedWhileOnHold;
    id <COSBuddyController> _nextControllerAfterHold;
    COSSoftwareUpdateController *_updateController;
}

+ (_Bool)checkIfUpdateInSetupFlowHasCompleted;
@property(retain, nonatomic) COSSoftwareUpdateController *updateController; // @synthesize updateController=_updateController;
@property(retain, nonatomic) id <COSBuddyController> nextControllerAfterHold; // @synthesize nextControllerAfterHold=_nextControllerAfterHold;
@property(retain, nonatomic) id <COSBuddyController> controllerDisplayedWhileOnHold; // @synthesize controllerDisplayedWhileOnHold=_controllerDisplayedWhileOnHold;
@property(retain, nonatomic) COSBuddyWristSelectionController *wristController; // @synthesize wristController=_wristController;
@property(retain, nonatomic) COSPasscodeChoiceViewController *passcodeChoiceController; // @synthesize passcodeChoiceController=_passcodeChoiceController;
@property(retain, nonatomic) COSGizmoCaptureViewController *pairingController; // @synthesize pairingController=_pairingController;
@property(retain, nonatomic) NSMutableArray *buddyControllers; // @synthesize buddyControllers=_buddyControllers;
@property(readonly, nonatomic) COSBuddyNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool combinedMessagesSignInFailed; // @synthesize combinedMessagesSignInFailed;
@property(nonatomic) _Bool hasSignedInToICloud; // @synthesize hasSignedInToICloud;
- (void).cxx_destruct;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (void)finishedActivating;
- (unsigned int)state;
- (unsigned int)position;
- (void)_pushGizmoBuddyController:(id)arg1;
- (void)popViewController:(id)arg1;
- (_Bool)_controllerShouldMirrorToGizmo:(id)arg1;
- (void)passcodeCreationFailed;
- (void)promptWhetherToResetPairing:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)topBuddyController;
- (id)popToBuddyControllerWithClass:(Class)arg1 animated:(_Bool)arg2;
- (void)buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2;
- (void)buddyControllerDone:(id)arg1;
- (void)buddyControllerCancelAnyHold;
- (void)buddyControllerReleaseHold:(id)arg1;
- (void)buddyControllerHold:(id)arg1 beforePresentingBuddyController:(id)arg2;
- (void)_buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2 nextController:(id)arg3;
- (void)_transitionFromBuddyController:(id)arg1 toBuddyController:(id)arg2;
- (void)_pushBuddyController:(id)arg1;
- (id)_viewControllerForBuddyController:(id)arg1;
- (id)_controllerForClass:(Class)arg1;
- (void)_finishBuddy;
- (id)_controllerFollowingControllerClass:(Class)arg1;
- (id)buddyFlowMapping;
- (void)displayPairingFailureAlertForReason:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_alertMessageForReason:(unsigned long long)arg1;
- (void)displayGenericPairingFailureAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)displayUpdateControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)promptWhetherToUpdateGizmo:(CDUnknownBlockType)arg1;
- (void)displayCompanionTooOldPairingFailureAlertWithDismissalHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasStartedPairing;
- (void)dealloc;
- (void)run;
- (void)_resetAnimated:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

