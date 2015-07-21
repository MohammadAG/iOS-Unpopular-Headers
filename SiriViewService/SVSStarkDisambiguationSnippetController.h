//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SVSStarkDisambiguationSnippetViewDelegate.h"
#import "SVSStarkItemController.h"
#import "SVSStarkTableViewControllerDelegate.h"

@class NSString, NSUUID, SAUIListItem, SVSStarkTableViewController;

@interface SVSStarkDisambiguationSnippetController : UIViewController <SVSStarkTableViewControllerDelegate, SVSStarkDisambiguationSnippetViewDelegate, SVSStarkItemController>
{
    unsigned long long _preferredListItemIndex;
    SAUIListItem *_preferredListItem;
    long long _interactionStyle;
    NSUUID *_conversationItemIdentifier;
    id <SVSStarkDisambiguationSnippetControllerDelegate> _delegate;
    SVSStarkTableViewController *_tableViewController;
    NSString *_disambiguationKey;
}

@property(copy, nonatomic, getter=_disambiguationKey) NSString *disambiguationKey; // @synthesize disambiguationKey=_disambiguationKey;
@property(retain, nonatomic, getter=_tableViewController) SVSStarkTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(nonatomic) __weak id <SVSStarkDisambiguationSnippetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
@property(nonatomic) long long interactionStyle; // @synthesize interactionStyle=_interactionStyle;
- (void).cxx_destruct;
- (id)tableViewControllerForSnippetView:(id)arg1;
- (id)backgroundColorForTableViewCells;
- (id)_disambiguationAttributedString:(id)arg1 boldedRange:(struct _NSRange)arg2;
- (void)didPressShowMore;
- (void)didPressItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)newShowMoreCellWithIdentifier:(id)arg1;
- (Class)showMoreCellClass;
- (void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)tableCellIdentifiersAndClasses;
- (_Bool)isActive;
- (void)autodisambiguate;
- (_Bool)shouldAutodisambiguate;
- (void)loadView;
- (id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 showHeader:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

