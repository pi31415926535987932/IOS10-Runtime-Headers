//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/NSObject-Protocol.h>

@class CLKComplication, NSString;

@protocol CLKComplicationServer <NSObject>
- (void)extendTimelineForComplication:(CLKComplication *)arg1;
- (void)reloadTimelineForComplication:(CLKComplication *)arg1;
- (void)checkinWithClientIdentifier:(NSString *)arg1 bundlePath:(NSString *)arg2;
@end

