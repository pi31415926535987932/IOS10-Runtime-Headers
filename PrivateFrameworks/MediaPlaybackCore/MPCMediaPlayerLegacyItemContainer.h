//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerItemContainer.h>

@class MPQueueFeeder;

@interface MPCMediaPlayerLegacyItemContainer : MPCPlayerItemContainer
{
    MPQueueFeeder *_queueFeeder;
}

@property(readonly, nonatomic) MPQueueFeeder *queueFeeder; // @synthesize queueFeeder=_queueFeeder;
- (void).cxx_destruct;
- (id)modelPlayEventRepresentation;
- (id)initWithQueueFeeder:(id)arg1;

@end
