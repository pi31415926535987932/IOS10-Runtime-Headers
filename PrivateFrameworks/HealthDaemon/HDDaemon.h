//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataCollectionManagerDelegate-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemon-Protocol.h>
#import <HealthDaemon/NSXPCListenerDelegate-Protocol.h>

@class HDAchievementAssetManager, HDAchievementDefinitionAlertManager, HDAchievementDoctorManager, HDAppLauncher, HDAppSubscriptionManager, HDAuthorizationManager, HDBackgroundTaskScheduler, HDCoachingDiagnosticManager, HDCompanionWorkoutCreditManager, HDContentProtectionManager, HDCurrentActivitySummaryHelper, HDDataProvenanceManager, HDDatabase, HDDemoDataGenerator, HDDeviceManager, HDFitnessFriendsManager, HDHealthServiceManager, HDNanoSyncManager, HDPluginManager, HDPrimaryProfile, HDProcessStateManager, HDRoutineGateway, HDServiceConnectionManager, HDUserCharacteristicsManager, NSMutableArray, NSMutableSet, NSString, NSURL, NSXPCListener, _HKBehavior;
@protocol HDAchievementDefinitionAlertNotifier, HDDaemonTester, HDHealthDatabase, HDNanoAlertSuppressionService, HDViewOnWakeService, OS_dispatch_queue;

@interface HDDaemon : NSObject <HDDataCollectionManagerDelegate, HDDiagnosticObject, NSXPCListenerDelegate, HDHealthDaemon>
{
    NSString *_homeDirectoryPath;
    NSMutableSet *_endpoints;
    NSObject<OS_dispatch_queue> *_mainQueue;
    HDContentProtectionManager *_contentProtectionManager;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    HDProcessStateManager *_processStateManager;
    HDPluginManager *_pluginManager;
    HDAchievementDoctorManager *_achievementDoctorManager;
    id <HDAchievementDefinitionAlertNotifier> _achievementDefinitionAlertNotifier;
    HDFitnessFriendsManager *_fitnessFriendsManager;
    HDRoutineGateway *_routineGateway;
    HDPrimaryProfile *_primaryProfile;
    HDDemoDataGenerator *_demoDataFactory;
    struct MGNotificationTokenStruct *_deviceNameChangesToken;
    NSXPCListener *_serviceListener;
    NSMutableArray *_daemonLaunchObservers;
    _Bool _daemonReady;
    int _didStart;
    _HKBehavior *_behavior;
    HDAchievementAssetManager *_achievementAssetManager;
    HDAppLauncher *_appLauncher;
    HDAuthorizationManager *_authorizationManager;
    HDCompanionWorkoutCreditManager *_companionWorkoutCreditManager;
    HDDatabase *_database;
    HDDatabase *_primaryPersonDatabase;
    HDHealthServiceManager *_serviceManager;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDDeviceManager *_deviceManager;
    HDAppSubscriptionManager *_subscriptionManager;
    HDNanoSyncManager *_nanoSyncManager;
    id <HDViewOnWakeService> _viewOnWakeService;
    HDCoachingDiagnosticManager *_coachingDiagnosticManager;
    HDAchievementDefinitionAlertManager *_achievementDefinitionAlertManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    id <HDNanoAlertSuppressionService> _alertSuppressionService;
    id <HDDaemonTester> _daemonTester;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HDDaemonTester> daemonTester; // @synthesize daemonTester=_daemonTester;
@property(retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService; // @synthesize alertSuppressionService=_alertSuppressionService;
@property(retain, nonatomic) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper; // @synthesize currentActivitySummaryHelper=_currentActivitySummaryHelper;
@property(retain, nonatomic) HDPrimaryProfile *primaryProfile; // @synthesize primaryProfile=_primaryProfile;
@property(retain, nonatomic) HDRoutineGateway *routineGateway; // @synthesize routineGateway=_routineGateway;
@property(retain, nonatomic) HDFitnessFriendsManager *fitnessFriendsManager; // @synthesize fitnessFriendsManager=_fitnessFriendsManager;
@property(retain, nonatomic) HDAchievementDefinitionAlertManager *achievementDefinitionAlertManager; // @synthesize achievementDefinitionAlertManager=_achievementDefinitionAlertManager;
@property(retain, nonatomic) HDCoachingDiagnosticManager *coachingDiagnosticManager; // @synthesize coachingDiagnosticManager=_coachingDiagnosticManager;
@property(retain, nonatomic) id <HDViewOnWakeService> viewOnWakeService; // @synthesize viewOnWakeService=_viewOnWakeService;
@property(retain, nonatomic) HDNanoSyncManager *nanoSyncManager; // @synthesize nanoSyncManager=_nanoSyncManager;
@property(retain, nonatomic) HDAppSubscriptionManager *subscriptionManager; // @synthesize subscriptionManager=_subscriptionManager;
@property(retain, nonatomic) HDDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) HDServiceConnectionManager *serviceConnectionManager; // @synthesize serviceConnectionManager=_serviceConnectionManager;
@property(retain, nonatomic) HDHealthServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(retain, nonatomic) HDDatabase *primaryPersonDatabase; // @synthesize primaryPersonDatabase=_primaryPersonDatabase;
@property(retain, nonatomic) HDDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) HDCompanionWorkoutCreditManager *companionWorkoutCreditManager; // @synthesize companionWorkoutCreditManager=_companionWorkoutCreditManager;
@property(retain, nonatomic) HDAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property(retain, nonatomic) HDAppLauncher *appLauncher; // @synthesize appLauncher=_appLauncher;
@property(retain, nonatomic) HDAchievementAssetManager *achievementAssetManager; // @synthesize achievementAssetManager=_achievementAssetManager;
@property(retain, nonatomic) _HKBehavior *behavior; // @synthesize behavior=_behavior;
- (void).cxx_destruct;
- (id)_newPluginManager;
- (id)_newCompanionWorkoutCreditManager;
- (id)_newFitnessFriendsManager;
- (id)_newNanoSyncManager;
- (id)_newProcessStateManager;
- (id)_newPrimaryProfile;
- (id)_newContentProtectionMangaer;
- (id)_newMainQueue;
- (id)_newBehavior;
- (id)diagnosticDescription;
- (void)_applyPPTUpdatesWithDatabase:(id)arg1;
@property(readonly) _Bool isAppleWatch;
@property(readonly) HDDataProvenanceManager *dataProvenanceManager;
@property(readonly) HDPluginManager *pluginManager;
@property(readonly) HDProcessStateManager *processStateManager;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property(readonly) HDUserCharacteristicsManager *userCharacteristicsManager;
@property(readonly) HDContentProtectionManager *contentProtectionManager;
@property(readonly) HDDeviceManager *healthDeviceManager;
- (id)syncEngine;
@property(readonly) HDHealthServiceManager *healthServiceManager;
- (id)temporaryProfile;
@property(readonly) id <HDHealthDatabase> healthDatabase;
@property(readonly) NSObject<OS_dispatch_queue> *mainQueue;
@property(readonly) NSURL *homeDirectoryURL;
@property(readonly) NSString *homeDirectoryPath;
- (id)_queryServersByUUID;
- (void)pauseAllActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)didUpdateActiveWorkoutServers;
- (id)firstPartyWorkoutSnapshot;
- (_Bool)hasAnyActiveWorkouts;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_persistDataAndNotify:(id)arg1 provenance:(id)arg2 error:(id *)arg3;
- (void)_resetPrivacySettings;
- (void)_updateCurrentDeviceName;
- (void)_registerForDeviceNameChanges;
- (_Bool)persistAndNotifyDataObjects:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (_Bool)persistAndNotifyDataObject:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(CDUnknownBlockType)arg4;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)pluginDataCollectorsForCollectionManager:(id)arg1;
- (void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
- (_Bool)healthDataReceived:(id)arg1 provenance:(id)arg2 error:(id *)arg3;
- (id)newClientWithConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_notifyDaemonLaunchObservers;
- (void)registerForDaemonReady:(id)arg1;
- (void)_terminating;
- (void)_terminationCleanup;
- (void)_periodicUpdates;
- (_Bool)_motionTrackingAvailable;
- (void)_setUpPedometerLaunchEventHandler;
- (void)_setupMemoryWarningHandler;
- (void)_setUpDistnotedEventHandler;
- (void)_setUpNotifydEventHandler;
- (void)_setUpLaunchEventHandlers;
- (void)_registerLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_unregisterLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_setUpSignalHandlers;
- (_Bool)_shouldInitializeDaemon;
- (void)_localeChanged:(id)arg1;
- (void)terminate;
- (void)invalidateAndWait;
- (void)dealloc;
- (void)start;
- (id)initWithHomeDirectoryPath:(id)arg1;
- (id)init;
- (id)healthDomainAccessorWithPairedDevice:(id)arg1;
- (id)IDSServiceWithIdentifier:(id)arg1;
- (id)pairedSyncCoordinatorWithServiceName:(id)arg1;
- (id)nanoPairedDeviceRegistry;
- (id)healthLiteUserDefaultsDomain;
- (id)containerWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

