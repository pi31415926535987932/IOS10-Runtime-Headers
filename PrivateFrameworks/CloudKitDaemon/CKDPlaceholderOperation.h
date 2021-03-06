//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CKDClientContext, CKDClientProxy, CKDOperation, NSDate, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> *_group;
    _Bool _isFinished;
    _Bool _isExecuting;
    NSDate *_startDate;
    CKDOperation *_realOperation;
    NSOperationQueue *_targetOperationQueue;
}

@property(readonly, nonatomic) NSOperationQueue *targetOperationQueue; // @synthesize targetOperationQueue=_targetOperationQueue;
@property(readonly, nonatomic) CKDOperation *realOperation; // @synthesize realOperation=_realOperation;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (id)_startDateString;
- (id)_runDurationString;
- (id)description;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (void)cancel;
- (_Bool)isConcurrent;
- (void)main;
- (void)start;
@property(readonly, nonatomic) NSString *operationID;
@property(readonly, nonatomic) CKDClientContext *context;
@property(readonly, nonatomic) __weak CKDClientProxy *proxy;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;

@end

