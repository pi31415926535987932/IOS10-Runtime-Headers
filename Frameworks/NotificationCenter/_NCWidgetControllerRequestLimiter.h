//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _NCWidgetControllerRequestLimiter : NSObject
{
    NSDate *_lastRequestDate;
    _Bool _isThrottled;
    long long _requestCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isRequestPermitted;

@end
