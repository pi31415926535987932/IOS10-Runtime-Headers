//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKBackgroundImageFaceView.h>

#import <NanoTimeKitCompanion/NTKVideoPlayerViewDelegate-Protocol.h>

@class NSString, NTKVideoPlayerView, UIImageView;

@interface NTKAVFaceBaseView : NTKBackgroundImageFaceView <NTKVideoPlayerViewDelegate>
{
    UIImageView *_posterImageView;
    NTKVideoPlayerView *_videoPlayerView;
}

@property(retain, nonatomic) NTKVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
- (void).cxx_destruct;
- (id)_posterImageView;
- (void)_reset;
- (void)_createVideoPlayerViewIfNeeded;
- (void)pauseVideoPlayerViewIfItExists;
- (void)layoutSubviews;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_cleanupAfterOptionTransitionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_beginTransitionToOption;
- (void)_prepareForEditing;
- (void)_transitionToPosterView:(id)arg1;
- (id)_selectedContentView;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

