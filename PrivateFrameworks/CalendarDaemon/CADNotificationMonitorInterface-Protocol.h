//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol CADNotificationMonitorInterface
- (void)CADEventSetInvitationStatus:(int)arg1 forEvent:(CDStruct_1ef3fb1f)arg2 error:(void (^)(int))arg3;
- (void)CADInviteReplyNotification:(CDStruct_1ef3fb1f)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADResourceChange:(CDStruct_1ef3fb1f)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADCalendar:(CDStruct_1ef3fb1f)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADEvent:(CDStruct_1ef3fb1f)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADDatabaseGetInboxRepliedSectionItems:(void (^)(int, NSArray *, NSArray *))arg1;
- (void)CADDatabaseGetReminderNotificationItems:(void (^)(int, NSArray *, NSArray *, NSArray *))arg1;
- (void)CADDatabaseGetEventNotificationItems:(void (^)(int, NSArray *, NSArray *, NSArray *))arg1;
- (void)CADDatabaseGetInviteReplyNotifications:(void (^)(int, NSArray *))arg1;
- (void)CADDatabaseGetResourceChanges:(void (^)(int, NSArray *))arg1;
- (void)CADCalendarSetClearedFromNotificationCenter:(CDStruct_1ef3fb1f)arg1 error:(void (^)(int))arg2;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(void (^)(int, NSArray *))arg1;
@end

