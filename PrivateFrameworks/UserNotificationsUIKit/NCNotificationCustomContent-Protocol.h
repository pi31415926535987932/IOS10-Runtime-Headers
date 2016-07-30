//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationAction, NCNotificationRequest, NSDictionary;
@protocol NCNotificationCustomContentDelegate;

@protocol NCNotificationCustomContent <NSObject>
@property(nonatomic) __weak id <NCNotificationCustomContentDelegate> delegate;
- (unsigned long long)customContentLocation;
- (_Bool)allowManualDismiss;
- (_Bool)defaultContentHidden;
- (_Bool)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2 withUserInfo:(NSDictionary *)arg3;
- (_Bool)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2;
- (void)didReceiveNotificationRequest:(NCNotificationRequest *)arg1;
@end
