//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRTransactionPacketizer, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRTransactionSourceOrigin : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    MRTransactionPacketizer *_packetizer;
    NSMutableArray *_packets;
    _Bool _active;
    struct _MROrigin *_origin;
    unsigned long long _name;
}

- (void)_cleanUp;
- (void)_processMessage:(id)arg1;
- (void)_begin;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)sendPackets:(id)arg1;
- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1 forOrigin:(struct _MROrigin *)arg2 withQueue:(id)arg3;

@end

