//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSNumber, SUBDescriptor, SUBDownload, SUBManager;

@protocol SUBManagerDelegate <NSObject>

@optional
- (void)manager:(SUBManager *)arg1 willProceedWithInstallation:(SUBDescriptor *)arg2;
- (void)manager:(SUBManager *)arg1 installationOfUpdate:(SUBDescriptor *)arg2 canProceed:(_Bool)arg3;
- (void)manager:(SUBManager *)arg1 didFinishInstallation:(SUBDescriptor *)arg2;
- (void)manager:(SUBManager *)arg1 didFailInstallation:(SUBDescriptor *)arg2 withError:(NSError *)arg3;
- (void)manager:(SUBManager *)arg1 didFinishDownload:(SUBDownload *)arg2 willProceedWithInstallation:(_Bool)arg3 waitingForAdmissionControl:(_Bool)arg4 denialReasons:(NSNumber *)arg5;
- (void)manager:(SUBManager *)arg1 didFinishDownload:(SUBDownload *)arg2 willProceedWithInstallation:(_Bool)arg3 waitingForAdmissionControl:(_Bool)arg4;
- (void)manager:(SUBManager *)arg1 didFinishDownload:(SUBDownload *)arg2;
- (void)manager:(SUBManager *)arg1 didFailDownload:(SUBDownload *)arg2 withError:(NSError *)arg3;
- (void)manager:(SUBManager *)arg1 didChangeProgressOnDownload:(SUBDownload *)arg2;
- (void)manager:(SUBManager *)arg1 scanRequestDidLocateUpdate:(SUBDescriptor *)arg2 error:(NSError *)arg3;
@end

