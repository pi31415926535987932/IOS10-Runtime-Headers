//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRAVRoutingClientController, MSVDistributedNotificationObserver, NSArray, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _registeredNowPlayingObservers;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    void *_nowPlayingPlaybackQueueContext;
    NSMutableDictionary *_transactionSources;
    MSVDistributedNotificationObserver *_televisionPairedDevicesChangedObserver;
    MSVDistributedNotificationObserver *_televisionIsPairingAllowedChangedObserver;
    _Bool _receivesExternalScreenTypeChangedNotifications;
    _Bool _receivesSupportedCommandsNotifications;
    _Bool _receivesRoutesChangedNotifications;
    _Bool _receivesOriginChangedNotifications;
    _Bool _receivesPlaybackErrorNotifications;
    _Bool _receivesVoiceInputRecordingStateNotifications;
    NSArray *_nowPlayingNotificationObservers;
    NSArray *_routingNotificationObservers;
    NSArray *_originNotificationObservers;
    NSArray *_voiceInputNotificationObservers;
    struct MRMediaRemoteService *_service;
    NSArray *_externalScreenTypeNotificationObservers;
}

+ (id)sharedServiceClient;
@property(retain, nonatomic) NSArray *externalScreenTypeNotificationObservers; // @synthesize externalScreenTypeNotificationObservers=_externalScreenTypeNotificationObservers;
@property(nonatomic) _Bool receivesVoiceInputRecordingStateNotifications; // @synthesize receivesVoiceInputRecordingStateNotifications=_receivesVoiceInputRecordingStateNotifications;
@property(nonatomic) _Bool receivesPlaybackErrorNotifications; // @synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications;
@property(nonatomic) _Bool receivesOriginChangedNotifications; // @synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications;
@property(nonatomic) _Bool receivesRoutesChangedNotifications; // @synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications;
@property(nonatomic) _Bool receivesSupportedCommandsNotifications; // @synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications;
@property(nonatomic) _Bool receivesExternalScreenTypeChangedNotifications; // @synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications;
@property(readonly, nonatomic) struct MRMediaRemoteService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSArray *voiceInputNotificationObservers; // @synthesize voiceInputNotificationObservers=_voiceInputNotificationObservers;
@property(retain, nonatomic) NSArray *originNotificationObservers; // @synthesize originNotificationObservers=_originNotificationObservers;
@property(retain, nonatomic) NSArray *routingNotificationObservers; // @synthesize routingNotificationObservers=_routingNotificationObservers;
@property(retain, nonatomic) NSArray *nowPlayingNotificationObservers; // @synthesize nowPlayingNotificationObservers=_nowPlayingNotificationObservers;
- (void)sendTransaction:(unsigned long long)arg1 withData:(id)arg2 forOrigin:(struct _MROrigin *)arg3;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterOrigin:(struct _MROrigin *)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerOrigin:(struct _MROrigin *)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unregisterForNowPlayingNotifications;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
@property(nonatomic, getter=copyNowPlayingPlaybackQueueContext) void *nowPlayingPlaybackQueueContext;
@property(readonly, nonatomic) NSArray *registeredOrigins;
@property(readonly, nonatomic, getter=isRegisteredForNowPlayingNotifications) _Bool registeredForNowPlayingNotifications;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
- (void)dealloc;
- (id)init;

@end
