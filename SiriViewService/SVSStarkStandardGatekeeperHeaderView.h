//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVSStarkGatekeeperHeaderView.h"

@class SVSStarkGatekeeperButton, UIImageView, UILabel;

@interface SVSStarkStandardGatekeeperHeaderView : SVSStarkGatekeeperHeaderView
{
    UIImageView *_appIconImageView;
    UILabel *_appNameLabel;
    SVSStarkGatekeeperButton *_dismissalButton;
}

@property(readonly, nonatomic, getter=_dismissalButton) SVSStarkGatekeeperButton *dismissalButton; // @synthesize dismissalButton=_dismissalButton;
@property(readonly, nonatomic, getter=_appNameLabel) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(readonly, nonatomic, getter=_appIconImageView) UIImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
- (void).cxx_destruct;
- (id)preferredFocusedItem;
- (void)layoutSubviews;
- (id)_starkGatekeeperDismissalTextForBundleId:(id)arg1;
- (id)_iconImageForBundleIdentifier:(id)arg1;
- (void)_updateForAppBundleIdentifier;
- (id)initWithRequestOptions:(id)arg1;

@end
