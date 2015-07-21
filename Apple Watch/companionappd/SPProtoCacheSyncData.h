//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, SPProtoCacheAssets;

@interface SPProtoCacheSyncData : PBCodable <NSCopying>
{
    NSString *_cacheIdentifier;
    SPProtoCacheAssets *_permanentCache;
    SPProtoCacheAssets *_transientCache;
}

@property(retain, nonatomic) SPProtoCacheAssets *transientCache; // @synthesize transientCache=_transientCache;
@property(retain, nonatomic) SPProtoCacheAssets *permanentCache; // @synthesize permanentCache=_permanentCache;
@property(retain, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
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

@end
