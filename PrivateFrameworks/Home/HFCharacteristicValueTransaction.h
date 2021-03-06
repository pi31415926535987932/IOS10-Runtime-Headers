//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFUpdateLogger, NAFuture, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_group;

@interface HFCharacteristicValueTransaction : NSObject
{
    _Bool _loggerIsExternal;
    NSMutableArray *_readValidators;
    NSMutableSet *_characteristicsToRead;
    NSMutableSet *_writeCharacteristicRequests;
    NSMutableSet *_actionSetsToExecute;
    NSDictionary *_actionSetErrorsKeyedByUUID;
    NSError *_overallReadError;
    NSError *_overallWriteError;
    NSMutableDictionary *_readFuturesKeyedByCharacteristicIdentifier;
    NSMutableDictionary *_writeFuturesKeyedByCharacteristicIdentifier;
    NAFuture *_commitFuture;
    NSObject<OS_dispatch_group> *_onFinishGroup;
    NSMutableSet *_clientReasons;
    HFUpdateLogger *_logger;
}

@property(nonatomic) _Bool loggerIsExternal; // @synthesize loggerIsExternal=_loggerIsExternal;
@property(retain, nonatomic) HFUpdateLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSMutableSet *clientReasons; // @synthesize clientReasons=_clientReasons;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *onFinishGroup; // @synthesize onFinishGroup=_onFinishGroup;
@property(retain, nonatomic) NAFuture *commitFuture; // @synthesize commitFuture=_commitFuture;
@property(retain, nonatomic) NSMutableDictionary *writeFuturesKeyedByCharacteristicIdentifier; // @synthesize writeFuturesKeyedByCharacteristicIdentifier=_writeFuturesKeyedByCharacteristicIdentifier;
@property(retain, nonatomic) NSMutableDictionary *readFuturesKeyedByCharacteristicIdentifier; // @synthesize readFuturesKeyedByCharacteristicIdentifier=_readFuturesKeyedByCharacteristicIdentifier;
@property(retain, nonatomic) NSError *overallWriteError; // @synthesize overallWriteError=_overallWriteError;
@property(retain, nonatomic) NSError *overallReadError; // @synthesize overallReadError=_overallReadError;
@property(retain, nonatomic) NSDictionary *actionSetErrorsKeyedByUUID; // @synthesize actionSetErrorsKeyedByUUID=_actionSetErrorsKeyedByUUID;
@property(retain, nonatomic) NSMutableSet *actionSetsToExecute; // @synthesize actionSetsToExecute=_actionSetsToExecute;
@property(retain, nonatomic) NSMutableSet *writeCharacteristicRequests; // @synthesize writeCharacteristicRequests=_writeCharacteristicRequests;
@property(retain, nonatomic) NSMutableSet *characteristicsToRead; // @synthesize characteristicsToRead=_characteristicsToRead;
@property(retain, nonatomic) NSMutableArray *readValidators; // @synthesize readValidators=_readValidators;
- (void).cxx_destruct;
- (id)executionErrorForActionSet:(id)arg1;
- (_Bool)shouldReadCharacteristic:(id)arg1 error:(id *)arg2;
- (id)init;

@end

