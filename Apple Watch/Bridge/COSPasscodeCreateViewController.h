//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "COSSetupPageViewController.h"

#import "COSBuddyController.h"

@class NSString, UILabel;

@interface COSPasscodeCreateViewController : COSSetupPageViewController <COSBuddyController>
{
    UILabel *_instructionLabel;
}

- (void).cxx_destruct;
- (void)back:(id)arg1;
- (void)_updateLayout;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)titleString;
- (void)passcodeCreationComplete;
- (_Bool)isComplex;
- (_Bool)controllerAllowsNavigatingBackTo;
- (void)removeFromNavHierarchyFrom:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

