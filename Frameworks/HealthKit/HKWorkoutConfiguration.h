//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _activityType;
    long long _locationType;
}

+ (id)_workoutConfigurationFromDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property long long locationType; // @synthesize locationType=_locationType;
@property unsigned long long activityType; // @synthesize activityType=_activityType;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end
