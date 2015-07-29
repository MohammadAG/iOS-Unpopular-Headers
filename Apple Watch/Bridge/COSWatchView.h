//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView;

@interface COSWatchView : UIView
{
    NSString *_screenImageName;
    unsigned long long _style;
    UIImageView *_watchImageView;
    UIImageView *_watchScreenImageView;
}

@property(retain, nonatomic) UIImageView *watchScreenImageView; // @synthesize watchScreenImageView=_watchScreenImageView;
@property(retain, nonatomic) UIImageView *watchImageView; // @synthesize watchImageView=_watchImageView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *screenImageName; // @synthesize screenImageName=_screenImageName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)overrideMaterial:(int)arg1 size:(unsigned long long)arg2;
- (id)initWithStyle:(unsigned long long)arg1;

@end
