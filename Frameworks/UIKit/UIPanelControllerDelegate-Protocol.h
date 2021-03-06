//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIPanelController, UISlidingBarState, UISlidingBarStateRequest, UIViewController;

@protocol UIPanelControllerDelegate <NSObject>

@optional
- (void)panelController:(UIPanelController *)arg1 didEndAnimatedTransitionToStateRequest:(UISlidingBarStateRequest *)arg2;
- (void)panelController:(UIPanelController *)arg1 willBeginAnimatedTransitionToStateRequest:(UISlidingBarStateRequest *)arg2;
- (UIViewController *)panelController:(UIPanelController *)arg1 separateSecondaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (void)panelController:(UIPanelController *)arg1 collapsePrimaryViewController:(UIViewController *)arg2 withFallbackSecondaryViewController:(UIViewController *)arg3;
- (_Bool)panelController:(UIPanelController *)arg1 collapseOntoPrimaryViewController:(UIViewController *)arg2;
- (UIViewController *)primaryViewControllerForExpandingPanelController:(UIPanelController *)arg1;
- (UIViewController *)primaryViewControllerForCollapsingPanelController:(UIPanelController *)arg1;
- (void)panelController:(UIPanelController *)arg1 didChangeToState:(UISlidingBarState *)arg2;
- (void)panelController:(UIPanelController *)arg1 willChangeToState:(UISlidingBarState *)arg2;
- (UISlidingBarStateRequest * (^)(NSArray *))panelControllerWillUpdate:(UIPanelController *)arg1;
@end

