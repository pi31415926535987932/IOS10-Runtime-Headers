//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class NSDateComponents;

@interface HKCurrentActivityCacheQuery : HKQuery
{
    NSDateComponents *_statisticsIntervalComponents;
    CDUnknownBlockType _updateHandler;
}

+ (Class)_queryServerDataObjectClass;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (void)_queue_deliverError:(id)arg1;
- (CDUnknownBlockType)_queue_errorHandler;
- (_Bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (void)deliverCurrentActivityCache:(id)arg1 moveStatistics:(id)arg2 exerciseStatistics:(id)arg3 standHoursInfo:(id)arg4 queryUUID:(id)arg5;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1 statisticsIntervalComponents:(id)arg2;

@end
