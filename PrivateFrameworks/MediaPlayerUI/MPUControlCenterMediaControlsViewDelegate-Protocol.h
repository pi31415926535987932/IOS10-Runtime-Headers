//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPUControlCenterMediaControlsView, MPUMediaRemoteControlsView;

@protocol MPUControlCenterMediaControlsViewDelegate <NSObject>

@optional
- (void)mediaControlsViewPrimaryActionTriggered:(MPUMediaRemoteControlsView *)arg1;
- (void)mediaControlsView:(MPUControlCenterMediaControlsView *)arg1 willTransitionToCompactView:(_Bool)arg2;
@end
