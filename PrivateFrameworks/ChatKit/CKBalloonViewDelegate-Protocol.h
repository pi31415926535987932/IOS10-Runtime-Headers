//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBalloonView;

@protocol CKBalloonViewDelegate <NSObject>
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)balloonViewLongTouched:(CKBalloonView *)arg1;
- (void)balloonViewDoubleTapped:(CKBalloonView *)arg1;
- (void)balloonViewTapped:(CKBalloonView *)arg1;
@end

