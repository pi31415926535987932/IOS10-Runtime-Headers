//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPAlbum, MIPArtist, MIPGenre, MIPPlaybackInfo, NSString;

@interface MIPSong : PBCodable <NSCopying>
{
    long long _geniusId;
    MIPAlbum *_album;
    MIPArtist *_artist;
    int _audioFormat;
    MIPArtist *_composer;
    int _discNumber;
    MIPGenre *_genre;
    NSString *_lyrics;
    int _lyricsChecksum;
    MIPPlaybackInfo *_playbackInfo;
    int _trackNumber;
    int _userRating;
    _Bool _excludeFromShuffle;
    _Bool _hasVideo;
    struct {
        unsigned int geniusId:1;
        unsigned int audioFormat:1;
        unsigned int discNumber:1;
        unsigned int lyricsChecksum:1;
        unsigned int trackNumber:1;
        unsigned int userRating:1;
        unsigned int excludeFromShuffle:1;
        unsigned int hasVideo:1;
    } _has;
}

@property(nonatomic) int lyricsChecksum; // @synthesize lyricsChecksum=_lyricsChecksum;
@property(retain, nonatomic) MIPPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) int audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) long long geniusId; // @synthesize geniusId=_geniusId;
@property(nonatomic) _Bool excludeFromShuffle; // @synthesize excludeFromShuffle=_excludeFromShuffle;
@property(nonatomic) int userRating; // @synthesize userRating=_userRating;
@property(nonatomic) int trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) int discNumber; // @synthesize discNumber=_discNumber;
@property(retain, nonatomic) MIPGenre *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) MIPArtist *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) MIPAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLyricsChecksum;
@property(readonly, nonatomic) _Bool hasPlaybackInfo;
@property(readonly, nonatomic) _Bool hasLyrics;
@property(nonatomic) _Bool hasHasVideo;
@property(nonatomic) _Bool hasAudioFormat;
@property(nonatomic) _Bool hasGeniusId;
@property(nonatomic) _Bool hasExcludeFromShuffle;
@property(nonatomic) _Bool hasUserRating;
@property(nonatomic) _Bool hasTrackNumber;
@property(nonatomic) _Bool hasDiscNumber;
@property(readonly, nonatomic) _Bool hasGenre;
@property(readonly, nonatomic) _Bool hasComposer;
@property(readonly, nonatomic) _Bool hasArtist;
@property(readonly, nonatomic) _Bool hasAlbum;

@end

