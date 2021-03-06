//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayerLooperInternal, NSArray;

@interface AVPlayerLooper : NSObject
{
    AVPlayerLooperInternal *_looper;
}

+ (id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2;
+ (id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;
+ (void)initialize;
- (void)_loopingItemFailedToPlayToEndTime:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_cleanupAfterPlayingLastLoopingCopy;
- (_Bool)_isWaitingForLastCopyToFinishSet;
- (void)_turnOffLooping;
- (_Bool)_setupLoopingReturningExceptionReason:(id *)arg1;
- (int)_calculateNumberOfCopiesNeeded;
- (void)_configureLoopingItem:(id)arg1;
@property(readonly, nonatomic) NSArray *loopingPlayerItems;
@property(readonly, nonatomic) long long loopCount;
@property(readonly, nonatomic, getter=isLoopingEnabled) _Bool loopingEnabled;
- (void)disableLooping;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (id)init;

@end

