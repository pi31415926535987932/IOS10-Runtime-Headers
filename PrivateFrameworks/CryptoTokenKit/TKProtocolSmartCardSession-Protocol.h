//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData;

@protocol TKProtocolSmartCardSession
- (void)terminateWithReply:(void (^)(void))arg1;
- (void)setEndPolicy:(long long)arg1;
- (void)transmit:(NSData *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
@end

