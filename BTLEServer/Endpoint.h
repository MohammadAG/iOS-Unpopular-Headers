//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PipeDelegate.h"

@class NSMutableSet, NSSet, NSString;

@interface Endpoint : NSObject <PipeDelegate>
{
    NSString *_identifier;
    long long _type;
    long long _priority;
    NSSet *_supportedCommands;
    NSMutableSet *_pipes;
}

@property(readonly, retain, nonatomic) NSMutableSet *pipes; // @synthesize pipes=_pipes;
@property(readonly, nonatomic) NSSet *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)pipe:(id)arg1 didReceiveMessage:(id)arg2;
- (void)removePipe:(id)arg1;
- (void)addPipe:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 supportedCommands:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

