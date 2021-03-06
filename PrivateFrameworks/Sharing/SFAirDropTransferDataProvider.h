//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SFAirDropTransferDataProviderClient-Protocol.h>
#import <Sharing/SFCompanionXPCManagerObserver-Protocol.h>

@class NSString;
@protocol SFAirDropTransferDataProviderDelegate;

@interface SFAirDropTransferDataProvider : NSObject <SFCompanionXPCManagerObserver, SFAirDropTransferDataProviderClient>
{
    id <SFAirDropTransferDataProviderDelegate> _delegate;
}

+ (id)sharedAlertDataProvider;
@property __weak id <SFAirDropTransferDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)xpcManagerConnectionInterrupted;
- (void)performSaveToiCloudForRecordID:(id)arg1;
- (void)performAppStoreSearchForRecordID:(id)arg1;
- (void)userDidSelectAppWithIndex:(id)arg1 forRecordID:(id)arg2;
- (void)userDidCancelTransferWithRecordID:(id)arg1;
- (void)userDidAcceptTransferWithRecordID:(id)arg1;
- (void)showCancelledAlertForRecordID:(id)arg1;
- (void)showFailedAlertForRecordID:(id)arg1;
- (void)showProgressAlertForRecordID:(id)arg1;
- (void)showAcceptAlertForRecordID:(id)arg1;
- (void)withdrawTransferDataWithRecordID:(id)arg1;
- (void)registerAsAirDropClient;
- (void)transferDataWithRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

