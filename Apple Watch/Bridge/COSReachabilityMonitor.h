//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface COSReachabilityMonitor : NSObject
{
    _Bool _isNetworkReachable;
    _Bool _isConnectedOverWifi;
}

+ (id)sharedMonitor;
@property(nonatomic) _Bool isConnectedOverWifi; // @synthesize isConnectedOverWifi=_isConnectedOverWifi;
@property(nonatomic) _Bool isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
- (void)_reachabilityChanged:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)init;

@end

