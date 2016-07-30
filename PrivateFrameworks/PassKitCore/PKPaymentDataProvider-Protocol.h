//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSString, PKPass, PKPaymentApplication;
@protocol PKPaymentDataProviderDelegate;

@protocol PKPaymentDataProvider <NSObject>
@property(nonatomic) id <PKPaymentDataProviderDelegate> delegate;
@property(readonly, nonatomic) _Bool isPaymentHandoffDisabled;
@property(retain, nonatomic) NSString *defaultPaymentPassIdentifier;
@property(readonly, nonatomic) _Bool secureElementIsProductionSigned;
@property(readonly, nonatomic) NSString *secureElementIdentifier;
@property(readonly, nonatomic) _Bool isDeviceInRestrictedMode;
- (void)setPaymentHandoffDisabled:(_Bool)arg1;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassUniqueIdentifier:(NSString *)arg2 completion:(void (^)(PKPass *))arg3;
- (PKPaymentApplication *)defaultPaymentApplicationForPassUniqueIdentifier:(NSString *)arg1;

@optional
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withNotificationServiceData:(unsigned long long)arg3 limit:(long long)arg4 completion:(void (^)(NSSet *))arg5;
- (_Bool)supportsNotificationsForPass:(PKPass *)arg1;
- (_Bool)supportsMessagesForPass:(PKPass *)arg1;
- (_Bool)supportsTransactionsForPass:(PKPass *)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(void (^)(NSSet *))arg5;
- (NSString *)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1;
@end
