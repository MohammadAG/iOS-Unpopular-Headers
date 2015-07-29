//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString;

@interface COSPinKeyView : UIView
{
    NSArray *_dashLayers;
    NSArray *_digitLayers;
    NSString *_digits;
}

@property(copy, nonatomic) NSString *digits; // @synthesize digits=_digits;
@property(retain, nonatomic) NSArray *digitLayers; // @synthesize digitLayers=_digitLayers;
@property(retain, nonatomic) NSArray *dashLayers; // @synthesize dashLayers=_dashLayers;
- (void).cxx_destruct;
- (void)setCodeLength:(long long)arg1;
- (void)layoutSubviews;
- (long long)expectedPinLength;
- (id)initWithFrame:(struct CGRect)arg1;

@end

