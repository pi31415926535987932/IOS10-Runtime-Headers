//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class UISwitch, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventPrivacyLevelDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    UISwitch *_control;
    _Bool _switchStateIsOn;
}

- (void).cxx_destruct;
- (void)_switchChanged:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)reset;

@end
