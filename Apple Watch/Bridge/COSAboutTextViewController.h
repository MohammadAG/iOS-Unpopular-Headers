//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "COSAboutViewController.h"

@class NSArray, NSMutableArray, NSString, UIImageView, UILabel, UIScrollView;

@interface COSAboutTextViewController : COSAboutViewController
{
    NSString *_headerString;
    NSString *_footerString;
    NSArray *_bullets;
    UIScrollView *_scrollView;
    UIImageView *_headerGlyphImageView;
    UILabel *_headerLabel;
    UILabel *_footerLabel;
    NSMutableArray *_bulletLabels;
}

@property(retain, nonatomic) NSMutableArray *bulletLabels; // @synthesize bulletLabels=_bulletLabels;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIImageView *headerGlyphImageView; // @synthesize headerGlyphImageView=_headerGlyphImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *bullets; // @synthesize bullets=_bullets;
@property(retain, nonatomic) NSString *footerString; // @synthesize footerString=_footerString;
@property(retain, nonatomic) NSString *headerString; // @synthesize headerString=_headerString;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)contentViewIsInAdjustedScrollView;

@end

