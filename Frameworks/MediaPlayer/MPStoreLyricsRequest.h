//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPModelSong;

@interface MPStoreLyricsRequest : NSObject <NSCopying>
{
    MPModelSong *_song;
}

+ (_Bool)supportsLyricsForURLBagDictionary:(id)arg1;
@property(retain, nonatomic) MPModelSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

