//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SVSStarkTableViewTitleView;

@interface SVSStarkTableViewContainer : UIView
{
    _Bool _fullScreen;
    UIView *_tableViewContainer;
    SVSStarkTableViewTitleView *_titleView;
}

@property(nonatomic, getter=_isFullScreen, setter=_setFullScreen:) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic, getter=_titleView) SVSStarkTableViewTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic, getter=_tableViewContainer) UIView *tableViewContainer; // @synthesize tableViewContainer=_tableViewContainer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

