//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SVSTranscriptContentView, UICollectionView;

@interface SVSTranscriptView : UIView
{
    SVSTranscriptContentView *_contentView;
}

- (void).cxx_destruct;
- (void)setKeylineHidden:(_Bool)arg1;
@property(nonatomic) double topMargin;
@property(retain, nonatomic) UIView *suggestionsView;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionView:(id)arg2;

@end

