//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTBulletinSendQueuePassthrough.h>

@class BLTBulletinSendQueueAttachmentSender, BLTSendQueueSerializer, NSDate, NSMutableArray, NSNumber, NSObject, PBCodable, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface BLTBulletinSendQueue : BLTBulletinSendQueuePassthrough
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_queuedBlockHandlers;
    NSNumber *_timeout;
    PCPersistentTimer *_timeoutTimer;
    NSDate *_lastItemDate;
    PBCodable *_firstRequest;
    unsigned short _firstRequestType;
    NSDate *_lastQueueSendDate;
    BLTBulletinSendQueueAttachmentSender *_attachmentSender;
    BLTSendQueueSerializer *_queueSerializer;
}

- (void).cxx_destruct;
- (void)_queue_queuePending;
- (void)_queue_startTimerWithFireDate:(id)arg1;
- (void)_queue_performSend;
- (void)sendNow;
- (void)queuePending;
- (void)handleFileURL:(id)arg1;
- (void)_sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(_Bool)arg4 attachmentURL:(id)arg5 attachmentKey:(id)arg6 didSend:(CDUnknownBlockType)arg7 didQueue:(CDUnknownBlockType)arg8;
- (id)init;

@end

