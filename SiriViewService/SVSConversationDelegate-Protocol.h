//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SVSConversation;

@protocol SVSConversationDelegate <NSObject>
- (void)conversation:(SVSConversation *)arg1 presentationStateDidChangeForItemsAtIndexPaths:(NSArray *)arg2;
- (void)conversation:(SVSConversation *)arg1 didRemoveItemsWithIdentifiers:(NSArray *)arg2 atIndexPaths:(NSArray *)arg3 parentItemIdentifiers:(NSArray *)arg4;
- (void)conversation:(SVSConversation *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2;
- (void)conversation:(SVSConversation *)arg1 didInsertItemsAtIndexPaths:(NSArray *)arg2;
@end
