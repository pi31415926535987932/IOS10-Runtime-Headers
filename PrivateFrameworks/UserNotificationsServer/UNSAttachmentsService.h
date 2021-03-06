//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNNotificationStoreObserver-Protocol.h>

@class NSString, UNSAttachmentsRepository, UNSNotificationRepository;
@protocol OS_dispatch_queue;

@interface UNSAttachmentsService : NSObject <UNNotificationStoreObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    UNSAttachmentsRepository *_attachmentsRepository;
    UNSNotificationRepository *_notificationRepository;
}

+ (id)_stagingDirectory;
+ (id)_defaultRepositoryDirectory;
- (void).cxx_destruct;
- (void)notificationStoreDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 removeNotifications:(id)arg3 forBundleIdentifier:(id)arg4;
- (void)_queue_applicationDidUninstall:(id)arg1;
- (void)_queue_applicationsDidUninstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)_queue_getAttachmentDataForAttachment:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAttachmentDataForAttachment:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_deleteAttachmentDataForURL:(id)arg1 bundleIdentifier:(id)arg2;
- (void)deleteAttachmentDataForAttachmentRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (void)deleteAttachmentDataForAttachments:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_queue_moveAttachmentFilesToRepository:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_validateStagedAttachments:(id)arg1 bundleIdentifier:(id)arg2 reversibleTransation:(id)arg3;
- (id)_queue_moveOrCopyAttachmentFilesToStagingArea:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 reversibleTransation:(id)arg4;
- (_Bool)_queue_verifyAttachmentsInRepository:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_verifyAndAddAttachmentDataToRepositoryForAttachments:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)verifyAndAddAttachmentDataToRepositoryForAttachments:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithNotificationRepository:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

