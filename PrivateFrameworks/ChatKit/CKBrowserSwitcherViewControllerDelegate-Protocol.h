//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserSwitcherViewController, UIViewController;
@protocol CKBrowserViewControllerProtocol;

@protocol CKBrowserSwitcherViewControllerDelegate <NSObject>
- (void)switcherViewControllerDidCollapse:(CKBrowserSwitcherViewController *)arg1;
- (void)switcherViewControllerDidFinishSwitching:(CKBrowserSwitcherViewController *)arg1 toViewController:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;

@optional
- (void)switcherViewController:(CKBrowserSwitcherViewController *)arg1 willHideSelectionViewWithAnimations:(CDUnknownBlockType *)arg2 completion:(CDUnknownBlockType *)arg3;
- (void)switcherViewController:(CKBrowserSwitcherViewController *)arg1 willShowSelectionViewWithAnimations:(CDUnknownBlockType *)arg2 completion:(CDUnknownBlockType *)arg3;
- (void)switcherViewControllerDidStartSwitching:(CKBrowserSwitcherViewController *)arg1;
- (void)switcherViewControllerDidSelectAppStore:(CKBrowserSwitcherViewController *)arg1;
@end

