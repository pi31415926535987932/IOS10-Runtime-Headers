//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber;

@interface MPAVBatteryLevel : NSObject
{
    NSNumber *_leftPercentage;
    NSNumber *_rightPercentage;
    NSNumber *_singlePercentage;
    NSNumber *_casePercentage;
}

@property(readonly, nonatomic) NSNumber *casePercentage; // @synthesize casePercentage=_casePercentage;
@property(readonly, nonatomic) NSNumber *singlePercentage; // @synthesize singlePercentage=_singlePercentage;
@property(readonly, nonatomic) NSNumber *rightPercentage; // @synthesize rightPercentage=_rightPercentage;
@property(readonly, nonatomic) NSNumber *leftPercentage; // @synthesize leftPercentage=_leftPercentage;
- (void).cxx_destruct;
- (id)initWithRouteDescription:(id)arg1;

@end
