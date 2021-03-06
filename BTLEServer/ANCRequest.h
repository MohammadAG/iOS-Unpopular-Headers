//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBATTRequest, DataInputStream, NSInvocation;

@interface ANCRequest : NSObject
{
    DataInputStream *_stream;
    CBATTRequest *_master;
    NSInvocation *_action;
}

@property(retain, nonatomic) NSInvocation *action; // @synthesize action=_action;
@property(readonly, nonatomic) CBATTRequest *master; // @synthesize master=_master;
@property(readonly, nonatomic) DataInputStream *stream; // @synthesize stream=_stream;
- (void)dealloc;
- (id)initWithRequests:(id)arg1;

@end

