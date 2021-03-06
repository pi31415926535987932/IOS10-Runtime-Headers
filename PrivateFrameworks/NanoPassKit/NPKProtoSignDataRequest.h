//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoSignDataRequest : PBRequest <NSCopying>
{
    NSString *_aid;
    NSData *_dataToSign;
    NSData *_digestToSign;
    int _entanglementMode;
    struct {
        unsigned int entanglementMode:1;
    } _has;
}

@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSData *digestToSign; // @synthesize digestToSign=_digestToSign;
@property(retain, nonatomic) NSData *dataToSign; // @synthesize dataToSign=_dataToSign;
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
@property(readonly, nonatomic) _Bool hasAid;
@property(nonatomic) _Bool hasEntanglementMode;
@property(nonatomic) int entanglementMode; // @synthesize entanglementMode=_entanglementMode;
@property(readonly, nonatomic) _Bool hasDigestToSign;
@property(readonly, nonatomic) _Bool hasDataToSign;

@end

