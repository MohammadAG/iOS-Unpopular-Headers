//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSRootController.h"

@class COSPreferencesListController;

@interface COSBridgeRootController : PSRootController
{
    COSPreferencesListController *_rootListController;
}

@property(readonly, nonatomic) COSPreferencesListController *rootListController; // @synthesize rootListController=_rootListController;
- (void).cxx_destruct;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setupControllerForToolbar:(id)arg1;

@end

