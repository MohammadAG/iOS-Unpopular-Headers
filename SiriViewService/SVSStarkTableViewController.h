//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UINavigationController, UITableView;

@interface SVSStarkTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _fullScreen;
    _Bool _showingMore;
    UITableView *_currentTableView;
    UINavigationController *_navigationController;
    NSArray *_items;
    id <SVSStarkTableViewControllerDelegate> _delegate;
    long long _initialNumberOfRowsToDisplay;
    NSString *_titleText;
}

@property(readonly, nonatomic, getter=_titleText) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic, getter=_initialNumberOfRowsToDisplay) long long initialNumberOfRowsToDisplay; // @synthesize initialNumberOfRowsToDisplay=_initialNumberOfRowsToDisplay;
@property(retain, nonatomic, getter=_delegate) id <SVSStarkTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=_isShowingMore, setter=_setShowingMore:) _Bool showingMore; // @synthesize showingMore=_showingMore;
@property(readonly, nonatomic, getter=_items) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic, getter=_navigationController) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) UITableView *currentTableView; // @synthesize currentTableView=_currentTableView;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isShowMoreRow:(unsigned long long)arg1;
- (void)redrawRowForItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_createRootViewController;
- (void)loadView;
- (id)initWithInitialNumberOfItemsToDisplay:(long long)arg1 title:(id)arg2 items:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

