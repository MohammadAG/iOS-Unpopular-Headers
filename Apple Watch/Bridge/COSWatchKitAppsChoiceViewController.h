//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "COSOptinViewController.h"

#import "COSBuddyController.h"

@class NSString;

@interface COSWatchKitAppsChoiceViewController : COSOptinViewController <COSBuddyController>
{
}

+ (_Bool)controllerNeedsToRun;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)selectedAboutDetail:(id)arg1;
- (void)selecedOptinChoice:(id)arg1;
- (void)updateLayout;
- (id)moreOptionsButtonString;
- (id)detailString;
- (id)detailTitleString;
- (id)aboutButtonString;
- (id)alternateButtonString;
- (id)suggestedButtonString;
- (id)imageResource;
- (id)titleString;
- (_Bool)legacyButtonStyles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

