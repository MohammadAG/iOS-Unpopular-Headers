//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ServerService.h"

@class CBMutableCharacteristic;

@interface BatteryServerService : ServerService
{
    CBMutableCharacteristic *_batteryLevel;
    int _iopsNotifyPercentChangeToken;
}

- (void)batteryLevelDidChange;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)stopNotifications;
- (void)startNotifications;
- (void)updateBatterylevel;
- (id)batteryLevelValue;
- (void)dealloc;
- (void)stop;
- (id)init;

@end

