//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSProtobuf, NSData, NSDate, NSString;

@protocol SPTransportDelegate <NSObject>
- (_Bool)unlockedSinceBoot;

@optional
- (NSDate *)dateOfFirstUnlock;
- (void)didReceiveSecureData;
- (void)incomingProtobuf:(IDSProtobuf *)arg1;
- (void)logDataSentToGizmo:(unsigned long long)arg1 application:(NSString *)arg2;
- (void)incomingData:(NSData *)arg1;
@end

