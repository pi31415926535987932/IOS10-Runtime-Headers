//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSNumber, NSString, PKPaymentRequest, PKRemotePaymentRequest;

@protocol NPKInAppPaymentInterfaceServerExportedInterface <NSObject>
- (void)showInAppInterfaceWithRemotePaymentRequest:(PKRemotePaymentRequest *)arg1 activationHandler:(void (^)(_Bool))arg2;
- (void)showInAppInterfaceWithPaymentRequest:(PKPaymentRequest *)arg1 forHostApplicationName:(NSString *)arg2 hostBundleIdentifier:(NSString *)arg3 hostProcessIdentifier:(int)arg4 hostIdentifier:(NSString *)arg5 orientation:(NSNumber *)arg6 activationHandler:(void (^)(_Bool))arg7;
@end

