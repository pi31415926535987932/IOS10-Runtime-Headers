//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog
{
    FBTransaction *_transaction;
}

@property(readonly, retain, nonatomic) FBTransaction *transaction; // @synthesize transaction=_transaction;
- (void)_dumpDebugInfo;
- (void)_watchdogTimerFired;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1;

@end
