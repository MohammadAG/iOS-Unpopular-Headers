//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "PSYSyncCoordinatorDelegate.h"
#import "SPCompanionAppServerProtocol.h"
#import "SPDaemonManagerTransactionObserver.h"
#import "SPLocalServerProtocol.h"
#import "SPTransportDelegate.h"

@class BKSProcessAssertion, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSXPCListener, SPUsageTrack;

@interface SPCompanionAppServer : NSObject <NSXPCListenerDelegate, SPLocalServerProtocol, SPDaemonManagerTransactionObserver, SPTransportDelegate, PSYSyncCoordinatorDelegate, SPCompanionAppServerProtocol>
{
    _Bool _paired;
    _Bool _launchRequestIsOutstanding;
    _Bool _cancelOutstandingLaunchRequests;
    unsigned int _nextTransactionID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_queueRemote;
    NSObject<OS_dispatch_source> *_gizmoApplicationsUpdateTimer;
    NSXPCListener *_localListener;
    NSMutableDictionary *_localConnections;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSMutableDictionary *_outstandingtransactions;
    SPUsageTrack *_usageTrack;
    NSMutableDictionary *_dateOfFirstAttemptToLaunchGizmoAppsByBundleID;
    BKSProcessAssertion *_processAssertion;
    NSString *_activeApplication;
    NSObject<OS_dispatch_queue> *_processAssertionForXcodeQueue;
    BKSProcessAssertion *_processAssertionForXcode;
    NSString *_plugInIdentifierForXcodeProcessAssertion;
    id _batteryStateObserver;
    NSObject<OS_dispatch_queue> *_remoteInterfaceProcessAssertionsQueue;
    NSMutableDictionary *_remoteInterfaceProcessAssertions;
    NSObject<OS_dispatch_queue> *_launchSockPuppetAppQueue;
    NSDate *_dateOfFirstUnlock;
    NSMutableDictionary *_extensionsDoingBackgroundGlanceUpdate;
    NSObject<OS_dispatch_queue> *_extensionsDoingBackgroundGlanceUpdateQueue;
    NSMutableDictionary *_lastExtensionKilledDates;
    NSObject<OS_dispatch_queue> *_lastExtensionKilledDatesQueue;
    double _timingTest_IDSReceiveTime;
    double _timingTest_IDSSendTime;
}

@property(nonatomic) double timingTest_IDSSendTime; // @synthesize timingTest_IDSSendTime=_timingTest_IDSSendTime;
@property(nonatomic) double timingTest_IDSReceiveTime; // @synthesize timingTest_IDSReceiveTime=_timingTest_IDSReceiveTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lastExtensionKilledDatesQueue; // @synthesize lastExtensionKilledDatesQueue=_lastExtensionKilledDatesQueue;
@property(retain, nonatomic) NSMutableDictionary *lastExtensionKilledDates; // @synthesize lastExtensionKilledDates=_lastExtensionKilledDates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionsDoingBackgroundGlanceUpdateQueue; // @synthesize extensionsDoingBackgroundGlanceUpdateQueue=_extensionsDoingBackgroundGlanceUpdateQueue;
@property(retain) NSMutableDictionary *extensionsDoingBackgroundGlanceUpdate; // @synthesize extensionsDoingBackgroundGlanceUpdate=_extensionsDoingBackgroundGlanceUpdate;
@property(retain, nonatomic) NSDate *dateOfFirstUnlock; // @synthesize dateOfFirstUnlock=_dateOfFirstUnlock;
@property(nonatomic) _Bool cancelOutstandingLaunchRequests; // @synthesize cancelOutstandingLaunchRequests=_cancelOutstandingLaunchRequests;
@property(nonatomic) _Bool launchRequestIsOutstanding; // @synthesize launchRequestIsOutstanding=_launchRequestIsOutstanding;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *launchSockPuppetAppQueue; // @synthesize launchSockPuppetAppQueue=_launchSockPuppetAppQueue;
@property(retain, nonatomic) NSMutableDictionary *remoteInterfaceProcessAssertions; // @synthesize remoteInterfaceProcessAssertions=_remoteInterfaceProcessAssertions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *remoteInterfaceProcessAssertionsQueue; // @synthesize remoteInterfaceProcessAssertionsQueue=_remoteInterfaceProcessAssertionsQueue;
@property(retain, nonatomic) id batteryStateObserver; // @synthesize batteryStateObserver=_batteryStateObserver;
@property(retain, nonatomic) NSString *plugInIdentifierForXcodeProcessAssertion; // @synthesize plugInIdentifierForXcodeProcessAssertion=_plugInIdentifierForXcodeProcessAssertion;
@property(retain) BKSProcessAssertion *processAssertionForXcode; // @synthesize processAssertionForXcode=_processAssertionForXcode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processAssertionForXcodeQueue; // @synthesize processAssertionForXcodeQueue=_processAssertionForXcodeQueue;
@property(retain, nonatomic) NSString *activeApplication; // @synthesize activeApplication=_activeApplication;
@property(retain) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) NSMutableDictionary *dateOfFirstAttemptToLaunchGizmoAppsByBundleID; // @synthesize dateOfFirstAttemptToLaunchGizmoAppsByBundleID=_dateOfFirstAttemptToLaunchGizmoAppsByBundleID;
@property(retain, nonatomic) SPUsageTrack *usageTrack; // @synthesize usageTrack=_usageTrack;
@property(nonatomic) unsigned int nextTransactionID; // @synthesize nextTransactionID=_nextTransactionID;
@property(retain, nonatomic) NSMutableDictionary *outstandingtransactions; // @synthesize outstandingtransactions=_outstandingtransactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property _Bool paired; // @synthesize paired=_paired;
@property(retain) NSMutableDictionary *localConnections; // @synthesize localConnections=_localConnections;
@property(retain) NSXPCListener *localListener; // @synthesize localListener=_localListener;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gizmoApplicationsUpdateTimer; // @synthesize gizmoApplicationsUpdateTimer=_gizmoApplicationsUpdateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queueRemote; // @synthesize queueRemote=_queueRemote;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)daemonManagerWillEndXPCTransaction;
- (_Bool)isExtensionDoingBackgroundGlanceUpdate:(id)arg1;
- (void)extensionDidEndBackgroundGlanceUpdate:(id)arg1;
- (void)extensionDidBeginBackgroundGlanceUpdate:(id)arg1;
- (void)getAlwaysInstallWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAlwaysInstall:(id)arg1;
- (void)setLogLevel:(id)arg1;
- (id)logStringArray:(id)arg1;
- (id)logDictionary:(id)arg1;
- (id)decodeInData:(id)arg1;
- (id)decodeOutData:(id)arg1;
- (id)decodeProtoData:(id)arg1;
- (id)transactionDictForID:(id)arg1 removeFromOutstanding:(_Bool)arg2;
- (void)sendAndTrackTransactionDict:(id)arg1 withCompletion:(id)arg2;
- (_Bool)isPaired;
- (void)nanoRegistryChanged:(id)arg1;
- (void)notifyGizmoContainerApplicationInstalled:(id)arg1;
- (_Bool)isAlwaysInstallMode;
- (void)installApplicationIfNeeded:(id)arg1 newGizmo:(_Bool)arg2;
- (void)updateGizmoApplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateGizmoApplications;
- (_Bool)showUserNotificationWithTitle:(id)arg1 message:(id)arg2;
- (void)releaseRemoteInterfaceAssertionsForPluginIdentifer:(id)arg1;
- (void)takeRemoteInterfaceProcessAssertionForPlugin:(id)arg1;
- (void)releaseProcessAssertionForXcode;
- (void)takeProcessAssertionForXcode:(id)arg1;
- (void)setApplicationIDForXcodeProcessAssertion:(id)arg1;
- (void)releaseProcessAssertion:(id)arg1;
- (void)takeProcessAssertion:(id)arg1;
- (void)_applicationDeactivated:(id)arg1;
- (void)_applicationActivated:(id)arg1;
- (void)handleIncomingPlist:(id)arg1;
- (void)handleIncomingData:(id)arg1;
- (_Bool)unlockedSinceBoot;
- (void)incomingData:(id)arg1;
- (void)launchCompanionAppForGizmoAppWithIdentifier:(id)arg1 withUserInfoData:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleIncomingProtoPlist:(id)arg1;
- (void)incomingProtobuf:(id)arg1;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendTimingData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 index:(long long)arg4;
- (void)sendCacheRequest:(id)arg1 identifier:(id)arg2;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;
- (void)remoteInterfaceDidDeactivate:(id)arg1;
- (void)installProvisioningProfileWithName:(id)arg1 profileData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)wakeExtensionForWatchApp:(id)arg1;
- (void)hideUserNotification;
- (void)showUserNotification:(long long)arg1 applicationName:(id)arg2;
- (void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeApplicationWithBundleID:(id)arg1 installer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeApplicationWithIdentifier:(id)arg1 installer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelPendingInstallations;
- (void)installAllApplicationsForProcessWithIdentifier:(id)arg1;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledGlancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendData:(id)arg1 toApplication:(id)arg2;
- (void)sendProtoData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3;
- (void)sendData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3;
- (void)sendToRemoteInterface:(id)arg1 call:(CDUnknownBlockType)arg2;
- (void)sendPlist:(id)arg1 allowInsecureTransport:(_Bool)arg2;
- (_Bool)shouldKillExtensionOnError:(id)arg1;
- (void)clearLastResetDateForPluginIdentifier:(id)arg1;
- (void)setLastExtensionKilledDateForPluginIdentifier:(id)arg1;
- (void)sendProtobuf:(id)arg1 sender:(id)arg2 timeOut:(double)arg3 allowInsecureTransport:(_Bool)arg4;
- (void)sendPlist:(id)arg1 timeOut:(double)arg2 allowInsecureTransport:(_Bool)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
- (void)sendFirstUnlockStatusToGizmo;
- (_Bool)_unlockedSinceBoot;
- (void)startGizmoApplicationsUpdateTimer;
- (void)cancelGizmoApplicationsUpdateTimer;
- (void)run;
- (void)logDataSentToGizmo:(unsigned long long)arg1 application:(id)arg2;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setupSignalHandlers;
- (void)syncApplications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

