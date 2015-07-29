//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSTimer, UIButton, UIImageView, UILabel;

@interface COSGetStartedView : UIView
{
    _Bool _pairingInfrastructureIsBusy;
    _Bool _animating;
    _Bool _isFadeAnimationInFlight;
    id <COSGetStartedDelegate> _delegate;
    unsigned long long _mode;
    unsigned long long _timeOfDay;
    NSTimer *_welcomeTextUpdater;
    UILabel *_welcomeLabel;
    UILabel *_titleLabel;
    UIButton *_acceptButton;
    UIButton *_automationButton;
    UIButton *_learnMoreButton;
    unsigned long long _radioState;
    NSMutableArray *_animationImageQueue;
    UIImageView *_animationImageView;
}

@property(nonatomic) _Bool isFadeAnimationInFlight; // @synthesize isFadeAnimationInFlight=_isFadeAnimationInFlight;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
@property(retain, nonatomic) NSMutableArray *animationImageQueue; // @synthesize animationImageQueue=_animationImageQueue;
@property(nonatomic) unsigned long long radioState; // @synthesize radioState=_radioState;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UIButton *automationButton; // @synthesize automationButton=_automationButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *welcomeLabel; // @synthesize welcomeLabel=_welcomeLabel;
@property(retain, nonatomic) NSTimer *welcomeTextUpdater; // @synthesize welcomeTextUpdater=_welcomeTextUpdater;
@property(nonatomic) unsigned long long timeOfDay; // @synthesize timeOfDay=_timeOfDay;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool pairingInfrastructureIsBusy; // @synthesize pairingInfrastructureIsBusy=_pairingInfrastructureIsBusy;
@property(nonatomic) __weak id <COSGetStartedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (float)detailTextSidePadding;
- (void)_dismiss;
- (void)_tappedInternalManualMode:(id)arg1;
- (void)_prepareForSetupAndDismiss;
- (void)learnMoreTapped:(id)arg1;
- (void)tappedStart:(id)arg1;
- (void)layoutSubviews;
- (void)updateContinueState;
- (void)updateRadioStateForNotification:(id)arg1;
- (void)_logConnectionDescription;
- (void)updateProblemState;
- (void)updateWelcomeText;
- (void)stopAnimating;
- (void)_startNextAnimation;
- (void)startAnimating;
- (void)stopUpdatingWelcomeText;
- (void)startUpdatingWelcomeText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

