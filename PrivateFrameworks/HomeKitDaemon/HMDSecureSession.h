//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HAPRemoteSession, HMDAWDRemoteSessionMetric, HMDDevice, HMDRemoteIdentityRegistry, HMDUser, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSecureSession : HMFMessageTransport <HMFLogging>
{
    _Bool _clientMode;
    _Bool _supportsSharedIdentities;
    HMDDevice *_peerDevice;
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDUser *_peer;
    HAPRemoteSession *_hapRemoteSession;
    HMDRemoteIdentityRegistry *_identityRegistry;
    CDUnknownBlockType _stoppedNotificationHandler;
    HMDDevice *_currentDevice;
    HMDAWDRemoteSessionMetric *_metric;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDAWDRemoteSessionMetric *metric; // @synthesize metric=_metric;
@property(nonatomic) _Bool supportsSharedIdentities; // @synthesize supportsSharedIdentities=_supportsSharedIdentities;
@property(readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(nonatomic) _Bool clientMode; // @synthesize clientMode=_clientMode;
@property(copy, nonatomic) CDUnknownBlockType stoppedNotificationHandler; // @synthesize stoppedNotificationHandler=_stoppedNotificationHandler;
@property(retain, nonatomic) HMDRemoteIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property(retain, nonatomic) HAPRemoteSession *hapRemoteSession; // @synthesize hapRemoteSession=_hapRemoteSession;
@property(retain, nonatomic) HMDUser *peer; // @synthesize peer=_peer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) HMDDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)handleSecureMessage:(id)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType sessionStoppedNotificationHandler;
- (void)stop;
- (void)_configureAsClient:(_Bool)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startAndInvokeOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 identityRegistry:(id)arg3 clientMode:(_Bool)arg4 sessionID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
