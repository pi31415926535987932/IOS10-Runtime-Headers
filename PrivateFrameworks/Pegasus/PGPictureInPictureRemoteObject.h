//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPictureInPictureRemoteObjectInterface-Protocol.h>
#import <Pegasus/PGPictureInPictureViewControllerDelegate-Protocol.h>

@class BKSProcessAssertion, NSArray, NSString, NSXPCConnection, PGPictureInPictureApplication, PGPictureInPictureViewController, PGPlaybackProgress;
@protocol OS_dispatch_queue, PGPictureInPictureRemoteObjectDelegate;

@interface PGPictureInPictureRemoteObject : NSObject <PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _controlsStyle;
    long long _currentState;
    BKSProcessAssertion *_processAssertion;
    PGPictureInPictureViewController *_pictureInPictureViewController;
    _Bool _isPictureInPicturePossible;
    long long _pictureInPictureInterruptionCounter;
    _Bool _pictureInPictureShouldStartWhenEnteringBackground;
    _Bool _shouldShowAlternateActionButtonImage;
    _Bool _shouldShowLoadingIndicator;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
    _Bool _isStartingStoppingOrCancellingPictureInPicture;
    id <PGPictureInPictureRemoteObjectDelegate> _delegate;
    struct {
        unsigned int pictureInPictureRemoteObject_shouldAcceptSetupRequest:1;
        unsigned int pictureInPictureRemoteObject_didCreatePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willShowPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didShowPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willHidePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didHidePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willDestroyPictureInPictureViewController:1;
    } _delegateRespondsTo;
    PGPictureInPictureApplication *_pictureInPictureApplication;
}

@property(readonly, nonatomic) PGPictureInPictureApplication *pictureInPictureApplication; // @synthesize pictureInPictureApplication=_pictureInPictureApplication;
- (void).cxx_destruct;
- (void)pictureInPictureViewControllerCancelButtonTapped:(id)arg1;
- (void)pictureInPictureViewControllerActionButtonTapped:(id)arg1;
- (void)pictureInPictureViewControllerStopButtonTapped:(id)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1;
- (void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(struct CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
- (oneway void)setLoadedTimeRanges:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setPlaybackProgress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setShouldShowLoadingIndicator:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setShouldShowAlternateActionButtonImage:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)stopPictureInPictureAnimated:(_Bool)arg1 withFinalLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)activateApplicationIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)startPictureInPictureAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setupAnimated:(_Bool)arg1 withHostedWindowHostingHandle:(id)arg2 preferredContentSize:(struct CGSize)arg3 initialLayerFrame:(struct CGRect)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_tearDownAndNotifyClientAboutCancellation:(_Bool)arg1;
- (id)_processAssertionForProcessIdentifier:(int)arg1;
- (void)invalidate;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)pictureInPictureInterruptionEnded;
- (void)pictureInPictureInterruptionBegan;
- (void)startPictureInPictureEnteringBackgroundAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
@property(readonly, nonatomic) _Bool shouldStartPictureInPictureEnteringBackground;
@property(nonatomic) __weak id <PGPictureInPictureRemoteObjectDelegate> delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(readonly, nonatomic) NSXPCConnection *connection;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
