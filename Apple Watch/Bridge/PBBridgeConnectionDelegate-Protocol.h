//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PBBridgeConnectionDelegate <NSObject>
- (void)transportBecameUnreachable;
- (void)transportBecameReachable;
- (void)remoteDidBecomeAvailable;

@optional
- (_Bool)checkBrickedState;
- (void)didHandlePerformanceResults;
- (void)prepareForInitialSync;
- (void)setSyncProgress:(double)arg1 andState:(long long)arg2;
- (void)setCrownOrientationRight:(_Bool)arg1;
- (void)remoteDidFailActivation:(NSString *)arg1 userActionable:(_Bool)arg2;
- (void)remoteDidFailActivation:(NSString *)arg1;
- (void)showLockedOnAnimation;
- (void)popToControllerType:(unsigned long long)arg1 withIntendedFireTime:(double)arg2;
- (void)pushControllerType:(unsigned long long)arg1 withIntendedFireTime:(double)arg2;
- (void)showTermsConfirmation;
- (void)connectionDidBecomeInactive;
- (void)connectionDidBecomeActive;
@end
