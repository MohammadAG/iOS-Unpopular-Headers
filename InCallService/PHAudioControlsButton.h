//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class PHRingView;

@interface PHAudioControlsButton : UIButton
{
    unsigned long long _controlType;
    PHRingView *_ringView;
    struct UIEdgeInsets _contentInsets;
}

@property(retain) PHRingView *ringView; // @synthesize ringView=_ringView;
@property struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) unsigned long long controlType; // @synthesize controlType=_controlType;
- (void).cxx_destruct;
- (double)_titleOffset;
- (struct CGSize)_buttonSize;
- (struct CGSize)intrinsicContentSize;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

