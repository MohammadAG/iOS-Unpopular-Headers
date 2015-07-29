//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLTCircularBitBuffer, NSLock, NSString;

@interface BLTPBProtobufSequenceNumberManager : NSObject
{
    unsigned long long _sendSequenceNumber;
    unsigned long long _recvSequenceNumber;
    NSLock *_sequenceNumberAccess;
    BLTCircularBitBuffer *_duplicateEntries;
    _Bool _isInitialSendSequenceNumber;
    NSString *_serviceName;
}

@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) _Bool isInitialSendSequenceNumber; // @synthesize isInitialSendSequenceNumber=_isInitialSendSequenceNumber;
- (void).cxx_destruct;
- (void)_writeSequenceNumbersToStore;
- (void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(unsigned long long)arg1;
- (id)_sequenceNumbersURL;
- (_Bool)_isSequenceNumberInOrder:(unsigned long long)arg1;
- (unsigned long long)nextSendSequenceNumber;
- (long long)setRecvSequenceNumber:(unsigned long long)arg1 force:(_Bool)arg2;
- (id)initWithServiceName:(id)arg1 duplicateCapacity:(unsigned long long)arg2;
- (id)initWithServiceName:(id)arg1;

@end

