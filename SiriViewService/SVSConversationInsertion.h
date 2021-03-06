//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AceObject, NSIndexPath, NSString;

@interface SVSConversationInsertion : NSObject
{
    long long _conversationItemType;
    AceObject *_aceObject;
    NSString *_aceCommandIdentifier;
    NSIndexPath *_indexPath;
}

@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) NSString *aceCommandIdentifier; // @synthesize aceCommandIdentifier=_aceCommandIdentifier;
@property(readonly, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property(readonly, nonatomic) long long conversationItemType; // @synthesize conversationItemType=_conversationItemType;
- (void).cxx_destruct;
- (id)initWithConversationItemType:(long long)arg1 aceObject:(id)arg2 aceCommandIdentifier:(id)arg3 indexPath:(id)arg4;

@end

