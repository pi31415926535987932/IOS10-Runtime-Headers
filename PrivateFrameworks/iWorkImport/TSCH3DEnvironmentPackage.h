//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCH3DEnvironmentPackage : NSObject <NSCopying>
{
    NSArray *_materials;
}

+ (id)instanceWithArchive:(const struct Chart3DEnvironmentPackageArchive *)arg1 unarchiver:(id)arg2;
- (void)didInitFromSOS;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (void)addMaterial:(id)arg1;
- (id)materialEnumerator;
- (unsigned long long)materialCount;
- (_Bool)hasCompleteData;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)saveToArchive:(struct Chart3DEnvironmentPackageArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DEnvironmentPackageArchive *)arg1 unarchiver:(id)arg2;

@end
