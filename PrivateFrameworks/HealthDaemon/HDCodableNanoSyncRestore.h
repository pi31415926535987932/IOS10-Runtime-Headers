//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>
#import <HealthDaemon/HDSyncObjectCollection-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncRestore : PBCodable <HDSyncObjectCollection, HDNanoSyncDescription, NSCopying>
{
    NSMutableArray *_objectDatas;
    int _objectType;
    struct {
        unsigned int objectType:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *objectDatas; // @synthesize objectDatas=_objectDatas;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)objectDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)objectDatasCount;
- (void)addObjectData:(id)arg1;
- (void)clearObjectDatas;
@property(nonatomic) _Bool hasObjectType;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
- (id)nanoSyncDescription;
- (void)setObjects:(id)arg1;
- (id)decodedObjects;
- (Class)syncEntityClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

