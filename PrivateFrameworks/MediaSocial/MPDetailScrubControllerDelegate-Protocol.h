//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaSocial/NSObject-Protocol.h>

@class MPDetailScrubController;

@protocol MPDetailScrubControllerDelegate <NSObject>

@optional
- (void)detailScrubController:(MPDetailScrubController *)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailScrubController:(MPDetailScrubController *)arg1 didChangeValue:(float)arg2;
- (void)detailScrubControllerDidEndScrubbing:(MPDetailScrubController *)arg1;
- (void)detailScrubControllerDidBeginScrubbing:(MPDetailScrubController *)arg1;
@end

