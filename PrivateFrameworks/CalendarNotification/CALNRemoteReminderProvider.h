//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarNotification/CALNRemoteDataProvider.h>

@class NSObject, SBSApplicationShortcutService;
@protocol OS_dispatch_queue;

@interface CALNRemoteReminderProvider : CALNRemoteDataProvider
{
    NSObject<OS_dispatch_queue> *_badgeCountQueue;
    SBSApplicationShortcutService *_sbApplicationShortcutService;
}

@property(retain) SBSApplicationShortcutService *sbApplicationShortcutService; // @synthesize sbApplicationShortcutService=_sbApplicationShortcutService;
- (void).cxx_destruct;
- (id)_phoneNumberTypeStringFromPhoneNumber:(id)arg1;
- (id)_formattedPhoneNumberFromPhoneNumber:(id)arg1;
- (void)_handleDeclineAndRemindMessageWithUserInfo:(id)arg1;
- (id)_sortedListOfCalendarsFromEventStore:(id)arg1;
- (id)_springBoardRemindersShortcutItemsFromEventStore:(id)arg1;
- (void)_updateBadgeCount:(id)arg1;
- (void)protectedAcknowledgeAlarm:(_Bool)arg1 forBulletinWithEntityID:(id)arg2 externalID:(id)arg3 extraActions:(CDUnknownBlockType)arg4;
- (void)bulletinAcknowledgedWithResponse:(id)arg1 acknowledgeAlarm:(_Bool)arg2 extraActions:(CDUnknownBlockType)arg3;
- (_Bool)_shouldIncludeBulletin:(id)arg1 sinceDate:(id)arg2 addedIDs:(id)arg3;
- (void)handleBulletinActionResponse:(id)arg1;
- (void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (id)sectionParameters;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)sortDescriptors;
- (id)defaultSectionInfo;
- (id)universalSectionIdentifier;
- (id)sectionIdentifier;
- (id)messageStringForAlertInfo:(id)arg1;
- (id)actionButtonColorForAlertInfo:(id)arg1;
- (id)actionButtonTitleForAlertInfo:(id)arg1;
- (id)snoozeActionForAlertInfo:(id)arg1 timeSpan:(int)arg2 snoozeInterval:(double *)arg3;
- (id)markAsCompletedActionWithAlertInfo:(id)arg1;
- (id)customActionWithAlertInfo:(id)arg1 forBulletin:(id)arg2;
- (id)supplementaryActionsForAlertInfo:(id)arg1 bulletin:(id)arg2 compactLayout:(_Bool)arg3;
- (id)modalMessageForAlertInfo:(id)arg1;
- (id)modalSubtitleForAlertInfo:(id)arg1;
- (id)modalTitleForAlertInfo:(id)arg1;
- (id)titleStringForAlertInfo:(id)arg1;
- (id)defaultURLForAlertInfo:(id)arg1;
- (id)viewActionForAlertInfo:(id)arg1;
- (id)closeActionForAlertInfo:(id)arg1;
- (id)_bulletinRequestForReminder:(id)arg1;
- (void)_updateBulletinRequest:(id)arg1 forReminder:(id)arg2;
- (id)bulletinRequestWithCalendarNotification:(id)arg1;
- (id)bulletinRequestForAlertInfo:(id)arg1;
- (_Bool)shouldWithdrawBulletin:(id)arg1 forItem:(id)arg2;
- (void)willPostBulletinForAlertInfo:(id)arg1;
- (_Bool)shouldPostBulletinForAlertInfo:(id)arg1;
- (void)handleDarwinNotification:(id)arg1;
- (_Bool)shouldCompleteReminderWhenCustomActionExecuted:(id)arg1;
- (_Bool)allowsLocationAlerts;
- (void)acknowledgeLocationAlertWithURL:(id)arg1 entityID:(id)arg2;
- (id)protectedItemForBulletinRecordID:(id)arg1;
- (id)entityScheme;
- (void)dealloc;
- (id)initWithNotificationFetchBlock:(CDUnknownBlockType)arg1;

@end
