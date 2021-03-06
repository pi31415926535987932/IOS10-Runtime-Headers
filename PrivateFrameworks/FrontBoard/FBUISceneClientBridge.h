//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBSceneHost-Protocol.h>
#import <FrontBoard/FBUISceneClient-Protocol.h>

@class FBSDisplay, FBUISceneIdentity, NSString;
@protocol FBSceneClient, FBUISceneClientDelegate, FBUISceneHostProxy;

@interface FBUISceneClientBridge : NSObject <FBUISceneClient, FBSceneHost>
{
    FBUISceneIdentity *_identity;
    id <FBUISceneHostProxy> _sceneHost;
    id <FBSceneClient> _legacyClient;
    id <FBUISceneClientDelegate> _delegate;
}

@property(retain) id <FBSceneClient> legacyClient; // @synthesize legacyClient=_legacyClient;
@property __weak id <FBUISceneHostProxy> sceneHost; // @synthesize sceneHost=_sceneHost;
@property(readonly, copy, nonatomic) FBUISceneIdentity *identity; // @synthesize identity=_identity;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 detachLayer:(id)arg2;
- (void)client:(id)arg1 updateLayer:(id)arg2;
- (void)client:(id)arg1 attachLayer:(id)arg2;
@property(readonly, retain, nonatomic) FBSDisplay *display;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)didInvalidateSceneHost:(id)arg1;
- (void)sceneHost:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, copy, nonatomic) NSString *sceneIdentifier;
- (void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2;
- (void)registerWithDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithSceneIdentity:(id)arg1 legacyClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

