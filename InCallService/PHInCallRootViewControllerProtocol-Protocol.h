//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PHInCallRootViewControllerProtocol <NSObject>
+ (void)setShouldLockDeviceOnNextDismiss;
+ (void)releaseDismissalAssertionForReason:(NSString *)arg1;
+ (void)obtainDismissalAssertionForReason:(NSString *)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)dismissContactsViewController;
- (void)presentContactsViewController;
- (void)presentPhoneRemoteViewController;
@end
