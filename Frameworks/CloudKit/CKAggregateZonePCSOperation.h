//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class CKRecordZone, NSArray;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation
{
    NSArray *_sourceZoneIDs;
    CKRecordZone *_targetZone;
    CDUnknownBlockType _aggregateZonePCSCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType aggregateZonePCSCompletionBlock; // @synthesize aggregateZonePCSCompletionBlock=_aggregateZonePCSCompletionBlock;
@property(copy, nonatomic) CKRecordZone *targetZone; // @synthesize targetZone=_targetZone;
@property(copy, nonatomic) NSArray *sourceZoneIDs; // @synthesize sourceZoneIDs=_sourceZoneIDs;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)performCKOperation;
- (id)activityCreate;
- (id)initWithSourceZoneIDs:(id)arg1 targetZone:(id)arg2;
- (id)init;

@end
