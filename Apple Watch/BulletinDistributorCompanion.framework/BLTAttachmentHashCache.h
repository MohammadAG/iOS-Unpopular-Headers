//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface BLTAttachmentHashCache : NSObject
{
    NSMutableDictionary *_cacheBySectionID;
}

- (void).cxx_destruct;
- (id)_hashAttachment:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3;
- (_Bool)hasAttachmentForSectionID:(id)arg1 matchID:(id)arg2;
- (_Bool)isAttachmentCached:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3;
- (void)removeAttachmentForSectionID:(id)arg1 matchID:(id)arg2;
- (void)cacheAttachment:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3;
- (id)init;

@end

