//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSHashTable, NSMapTable, TSPComponentObjectUUIDMap, TSPObject;
@protocol TSPDataArchiver;

@protocol TSPEncoderWriteCoordinatorDelegate <NSObject>
- (_Bool)skipMetadataObjectSerialization;
- (TSPObject *)createMetadataForRootObject:(TSPObject *)arg1 dataArchiver:(id <TSPDataArchiver>)arg2 archivedObjects:(NSMapTable *)arg3 componentObjectUUIDMap:(TSPComponentObjectUUIDMap *)arg4 externalReferences:(NSHashTable *)arg5 weakExternalReferences:(NSHashTable *)arg6 lazyReferences:(NSHashTable *)arg7 dataReferences:(NSHashTable *)arg8 error:(id *)arg9;
- (long long)componentWriterMode;
- (unsigned long long)objectTargetType;
@end

