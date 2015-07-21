//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

@interface BTLEXpcConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

- (void)peerIsNotUsingBuiltinService:(id)arg1;
- (void)peerIsUsingBuiltinService:(id)arg1;
- (void)authenticationDidFail:(id)arg1;
- (void)authenticationDidSucceed:(id)arg1;
- (void)sendMsg:(id)arg1 args:(id)arg2;
- (void)handleDisconnectClassicDeviceMsg:(id)arg1;
- (void)handleNotifyPiconetClockMsg:(id)arg1;
- (void)handlePersistServerServicesMsg:(id)arg1;
- (void)handleConnectAlwaysMsg:(id)arg1;
- (void)handleConnectOnceMsg:(id)arg1;
- (void)handleMsg:(id)arg1;
- (void)handleDisconnection;
- (void)handleEvent:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end
