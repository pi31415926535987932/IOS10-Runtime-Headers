//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Widgets/NSObject-Protocol.h>

@class WGWidgetHostingViewController;

@protocol WGWidgetHostingViewControllerDelegate <NSObject>
- (struct CGSize)maxSizeForWidget:(WGWidgetHostingViewController *)arg1 forDisplayMode:(long long)arg2;

@optional
- (struct UIEdgeInsets)marginInsetsForWidget:(WGWidgetHostingViewController *)arg1;
- (long long)activeLayoutModeForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldRequestWidgetRemoteViewControllers;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
- (void)contentAvailabilityDidChangeForWidget:(WGWidgetHostingViewController *)arg1;
- (void (^)(void))widget:(WGWidgetHostingViewController *)arg1 didUpdatePreferredHeight:(double)arg2 completion:(void (^)(_Bool))arg3;
- (void)remoteViewControllerViewDidAppearForWidget:(WGWidgetHostingViewController *)arg1;
- (void)remoteViewControllerDidConnectForWidget:(WGWidgetHostingViewController *)arg1;
@end
