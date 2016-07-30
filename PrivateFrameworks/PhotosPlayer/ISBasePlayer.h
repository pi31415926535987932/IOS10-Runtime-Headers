//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISObservable.h>

#import <PhotosPlayer/ISPlayerItemObserver-Protocol.h>
#import <PhotosPlayer/ISWrappedAVPlayerDelegate-Protocol.h>

@class ISBehavior, ISLayerPlayer, ISPlayerItem, ISPlayerState, ISWrappedAVPlayer, NSHashTable, NSString;

@interface ISBasePlayer : ISObservable <ISPlayerItemObserver, ISWrappedAVPlayerDelegate>
{
    _Bool _audioEnabled;
    float _audioVolume;
    float __videoVolume;
    ISPlayerItem *_playerItem;
    long long _status;
    NSHashTable *__outputs;
    ISLayerPlayer *_crossfadePlayer;
    ISBehavior *_activeBehavior;
    id __videoWillPlayToEndObserver;
    ISPlayerState *_lastAppliedLayoutInfo;
    ISWrappedAVPlayer *_videoPlayer;
    CDStruct_1b6d18a9 __videoForwardPlaybackEndTime;
}

@property(readonly, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic, setter=_setVideoForwardPlaybackEndTime:) CDStruct_1b6d18a9 _videoForwardPlaybackEndTime; // @synthesize _videoForwardPlaybackEndTime=__videoForwardPlaybackEndTime;
@property(nonatomic, setter=_setVideoVolume:) float _videoVolume; // @synthesize _videoVolume=__videoVolume;
@property(retain, nonatomic, setter=_setLastAppliedLayoutInfo:) ISPlayerState *lastAppliedLayoutInfo; // @synthesize lastAppliedLayoutInfo=_lastAppliedLayoutInfo;
@property(retain, nonatomic, setter=_setVideoWillPlayToEndObserver:) id _videoWillPlayToEndObserver; // @synthesize _videoWillPlayToEndObserver=__videoWillPlayToEndObserver;
@property(retain, nonatomic, setter=setActiveBehavior:) ISBehavior *activeBehavior; // @synthesize activeBehavior=_activeBehavior;
@property(readonly, nonatomic) ISLayerPlayer *crossfadePlayer; // @synthesize crossfadePlayer=_crossfadePlayer;
@property(readonly, nonatomic) NSHashTable *_outputs; // @synthesize _outputs=__outputs;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(nonatomic, setter=_setStatus:) long long status; // @synthesize status=_status;
@property(retain, nonatomic) ISPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void).cxx_destruct;
- (void)avPlayer:(id)arg1 item:(id)arg2 didChangeToStatus:(long long)arg3;
- (void)avPlayer:(id)arg1 didChangeToItem:(id)arg2;
- (void)avPlayer:(id)arg1 didChangeToStatus:(long long)arg2;
- (void)playerItemStatusDidChange:(id)arg1;
- (void)behavior:(id)arg1 setCrossfadePlayRate:(float)arg2;
- (void)behavior:(id)arg1 seekCrossfadeToTime:(double)arg2;
- (void)behavior:(id)arg1 setVideoVolume:(float)arg2;
- (void)behavior:(id)arg1 setVideoForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)behavior:(id)arg1 prerollVideoAtRate:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)behavior:(id)arg1 seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)behavior:(id)arg1 setVideoPlayRate:(float)arg2;
- (void)behavior:(id)arg1 didSetOutputInfo:(id)arg2 withTransitionOptions:(id)arg3;
- (void)_updateVideoPlayerVolume;
- (void)_setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateStatus;
- (void)_updatePlayerItemAudioEnabled;
- (void)_updateWillPlayToEndObserver;
- (void)_updateContentFromPlayerItem;
- (void)_playerItemDidPlayToEnd:(id)arg1;
- (void)_configureNewOutput:(id)arg1;
- (void)enumerateOutputsWithBlock:(CDUnknownBlockType)arg1;
- (void)applyOutputInfo:(id)arg1 fromBehavior:(id)arg2 withTransitionOptions:(id)arg3;
- (double)videoWillPlayToEndInterval;
- (void)_videoWillPlayToEnd;
- (void)_videoDidPlayToEnd;
- (void)videoPlayRateDidChange;
- (void)willRemoveOutput:(id)arg1;
- (void)didAddOutput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)statusDidChange;
- (void)playerItemDidChange;
- (id)mutableChangeObject;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
