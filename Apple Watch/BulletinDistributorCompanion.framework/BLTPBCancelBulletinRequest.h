//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSString;

@interface BLTPBCancelBulletinRequest : PBRequest <NSCopying>
{
    double _date;
    unsigned int _feed;
    NSString *_publisherMatchID;
    NSString *_universalSectionID;
    struct {
        unsigned int date:1;
        unsigned int feed:1;
    } _has;
}

@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) unsigned int feed; // @synthesize feed=_feed;
@property(retain, nonatomic) NSString *publisherMatchID; // @synthesize publisherMatchID=_publisherMatchID;
@property(retain, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDate;
@property(nonatomic) _Bool hasFeed;
@property(readonly, nonatomic) _Bool hasPublisherMatchID;
@property(readonly, nonatomic) _Bool hasUniversalSectionID;

@end

