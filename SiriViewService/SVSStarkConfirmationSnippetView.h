//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface SVSStarkConfirmationSnippetView : UIView
{
    id <SVSStarkConfirmationSnippetViewDelegate> _delegate;
    NSArray *_confirmationButtons;
    double _confirmationButtonYOrigin;
}

@property(nonatomic, getter=_confirmationButtonYOrigin) double confirmationButtonYOrigin; // @synthesize confirmationButtonYOrigin=_confirmationButtonYOrigin;
@property(readonly, nonatomic) NSArray *confirmationButtons; // @synthesize confirmationButtons=_confirmationButtons;
@property(nonatomic) __weak id <SVSStarkConfirmationSnippetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)preferredFocusedItem;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)confirmationButton:(id)arg1 tappedWithHandler:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (double)_confirmationButtonYOriginInBounds:(struct CGRect)arg1;
- (void)enableReadAgainButton;
- (id)initWithFrame:(struct CGRect)arg1 confirmationButtons:(id)arg2 delegate:(id)arg3;

@end

