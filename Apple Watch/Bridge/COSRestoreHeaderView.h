//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface COSRestoreHeaderView : UIView
{
    UILabel *_title;
    UILabel *_instruction;
}

@property(retain, nonatomic) UILabel *instruction; // @synthesize instruction=_instruction;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

