//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary;

@protocol PCSSyncingProtocol
- (void)requestKeys:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)syncKeys:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getAllClients:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getPCSKeyHash:(void (^)(NSData *, NSError *))arg1;
- (void)checkBackupWithReply:(void (^)(NSString *, NSDate *, NSError *))arg1;
- (void)performBackupWithReply:(void (^)(NSError *))arg1;
@end
