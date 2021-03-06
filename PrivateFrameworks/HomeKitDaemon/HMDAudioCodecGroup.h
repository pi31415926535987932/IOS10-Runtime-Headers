//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDNumberParser.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDAudioCodecGroup : HMDNumberParser <NSCopying, NSSecureCoding>
{
    unsigned long long _codec;
}

+ (id)arrayWithCodecs:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long codec; // @synthesize codec=_codec;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAudioCodecGroup:(unsigned long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

