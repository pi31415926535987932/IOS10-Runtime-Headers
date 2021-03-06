//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKRemoteItemForSending, NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol CKSMSComposeViewServiceProtocol <NSObject>
- (void)setGameCenterPickedHandles:(NSArray *)arg1 playerNames:(NSArray *)arg2;
- (void)setGameCenterModeWithPickerBlock:(void (^)(void))arg1;
- (void)forceMMS;
- (void)forceCancelComposition;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (void)insertFilename:(NSString *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3 options:(NSDictionary *)arg4;
- (void)insertRemoteItemForSending:(CKRemoteItemForSending *)arg1;
- (void)insertData:(NSData *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3;
- (void)insertAttachmentWithURL:(NSURL *)arg1 andDescription:(NSString *)arg2;
- (void)setUICustomizationData:(NSData *)arg1;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3;
- (void)disableCameraAttachments;
- (void)setCanEditRecipients:(_Bool)arg1;
- (void)setPendingAddresses:(NSArray *)arg1;
@end

