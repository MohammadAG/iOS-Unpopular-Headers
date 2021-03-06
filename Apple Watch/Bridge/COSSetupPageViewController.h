//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "COSBuddyController.h"

@class NSString, UILabel, UIView;

@interface COSSetupPageViewController : UIViewController <COSBuddyController>
{
    UIView *_contentView;
    UILabel *_titleLabel;
    id <COSBuddyControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)titleString;
@property(readonly, nonatomic) UIView *contentView;
- (_Bool)contentViewIsInAdjustedScrollView;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) struct CGRect computedTitleFrame;
- (void)updateTitleLabel;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

