//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotificationCenter/SBUISizeObservingViewDelegate-Protocol.h>
#import <NotificationCenter/_NCWidgetViewController_Service_IPC-Protocol.h>

@class NSMapTable, NSMutableArray, NSObject, NSString, UIScrollViewDelayedTouchesBeganGestureRecognizer, UIView, _UIViewControllerTransitionContext;
@protocol NCWidgetProviding, OS_dispatch_queue, UIViewControllerAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, SBUISizeObservingViewDelegate>
{
    UIViewController<NCWidgetProviding> *_contentProvidingViewController;
    NSString *_widgetIdentifier;
    UIView *_contentView;
    struct UIEdgeInsets _clientMarginInsets;
    NSObject<OS_dispatch_queue> *_remoteViewControllerProxyQueue;
    id <UIViewControllerAnimatedTransitioning> _transitionController;
    _UIViewControllerTransitionContext *_activeTransitionContext;
    NSMapTable *_wrappedAppearStatesToOpenTransactionIDs;
    UIScrollViewDelayedTouchesBeganGestureRecognizer *_touchDelayGestureRecognizer;
    struct {
        unsigned int implementsPerformUpdateWithCompletionHandler:1;
        unsigned int implementsMarginInsets:1;
        unsigned int implementsActiveDisplayModeDidChange:1;
    } _contentProvidingViewControllerFlags;
    NSMapTable *_activeTransitionContextsByRequestID;
    NSMutableArray *_pendingSizeTransitionUUIDStack;
}

+ (void)_reduceTransparencyDidChange:(id)arg1;
+ (void)initialize;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(readonly, nonatomic, getter=_pendingSizeTransitionUUIDStack) NSMutableArray *pendingSizeTransitionUUIDStack; // @synthesize pendingSizeTransitionUUIDStack=_pendingSizeTransitionUUIDStack;
@property(retain, nonatomic, getter=_activeTransitionContextsByRequestID) NSMapTable *activeTransitionContextsByRequestID; // @synthesize activeTransitionContextsByRequestID=_activeTransitionContextsByRequestID;
@property(retain, nonatomic, getter=_contentProvidingViewController) UIViewController<NCWidgetProviding> *contentProvidingViewController; // @synthesize contentProvidingViewController=_contentProvidingViewController;
- (void).cxx_destruct;
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__performUpdateWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__requestEncodedLayerTreeToURL:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)__closeTransactionForPreferredHeightChangeWithIdentifier:(id)arg1;
- (void)__performOutstandingCompletionForRequestWithIdentifier:(id)arg1;
- (void)__performOutstandingAnimationsForRequestWithIdentifier:(id)arg1;
- (void)__viewWillTransitionToSize:(struct CGSize)arg1 requestIdentifier:(id)arg2;
- (void)__setMaximumSize:(struct CGSize)arg1 forDisplayMode:(long long)arg2;
- (void)__setActiveDisplayMode:(long long)arg1 requestIdentifier:(id)arg2;
- (void)__setWidgetIdentifier:(id)arg1;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (void)_willAppearInRemoteViewController;
- (void)delayed:(id)arg1;
- (void)_setActiveDisplayMode:(long long)arg1 requestIdentifier:(id)arg2 force:(_Bool)arg3;
- (void)_closeTransactionForActiveDisplayModeChangeWithIdentifier:(id)arg1;
- (long long)_clientLargestSupportedDisplayMode;
- (void)_encodeLayerTreeToURL:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (id)_widgetExtensionContext;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)_clientLargestSupportedDisplayModeDidChange;
- (void)_performUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (double)_clientPreferredContentHeightPermittingAutolayout:(_Bool)arg1;
- (void)_requestPreferredViewHeight:(double)arg1 usingAutolayout:(_Bool)arg2;
- (void)_requestPreferredViewHeight:(double)arg1 usingAutolayout:(_Bool)arg2 force:(_Bool)arg3;
- (double)_effectiveHeightForRequestedHeight:(double)arg1;
- (id)_existingTransitionContextForRequestIdentifier:(id)arg1;
- (id)_transitionContextForRequestIdentifier:(id)arg1 usingAutolayout:(_Bool)arg2 createIfNecessary:(_Bool)arg3;
- (id)_customAnimator:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_closeTransactionWithAppearState:(int)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)loadView;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (struct CGRect)_sanitizedClientFrameFromHostSize:(struct CGSize)arg1;
- (double)_sanitizedClientContentWidthForProposedHostWidth:(double)arg1;
- (void)_requestMarginInsets;
- (void)_setContentProvidingViewController:(id)arg1;
- (void)_enqueueProxyRequest:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
