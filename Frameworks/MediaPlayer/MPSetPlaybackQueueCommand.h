//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSMutableDictionary;

@interface MPSetPlaybackQueueCommand : MPRemoteCommand
{
    NSMutableDictionary *_registeredSpecializedQueues;
}

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (void)unregisterSpecializedQueueIdentifier:(id)arg1;
- (void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;

@end
