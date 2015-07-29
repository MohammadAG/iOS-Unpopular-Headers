//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface BLTLightsAndSirensReplyInfo : NSObject
{
    _Bool _replySent;
    _Bool _didLogAggd;
    CDUnknownBlockType _reply;
    unsigned long long _didPlayLightsAndSirens;
    NSDate *_expiration;
    NSDate *_bulletinPublicationDate;
}

@property(nonatomic) _Bool didLogAggd; // @synthesize didLogAggd=_didLogAggd;
@property(retain, nonatomic) NSDate *bulletinPublicationDate; // @synthesize bulletinPublicationDate=_bulletinPublicationDate;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(nonatomic) unsigned long long didPlayLightsAndSirens; // @synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens;
@property(copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(readonly, nonatomic) _Bool replySent; // @synthesize replySent=_replySent;
- (void).cxx_destruct;
- (_Bool)sendReply;
- (_Bool)hasExpired;
- (id)init;

@end
