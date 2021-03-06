//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/NSCoding-Protocol.h>

@class NSDictionary;

@interface FIUIWorkoutActivityType : NSObject <NSCoding>
{
    _Bool _isIndoor;
    unsigned long long _identifier;
    unsigned long long _auxiliaryTypeIdentifier;
    NSDictionary *_metadata;
}

+ (id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2;
+ (id)wheelchairActivityTypes;
+ (id)supportedActivityTypes;
+ (id)activityTypeWithWorkout:(id)arg1;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2 metadata:(id)arg3;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) unsigned long long auxiliaryTypeIdentifier; // @synthesize auxiliaryTypeIdentifier=_auxiliaryTypeIdentifier;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)localizedNameComponents;
- (id)localizedName;
@property(readonly, nonatomic) unsigned long long effectiveTypeIdentifier;
@property(readonly, nonatomic) _Bool isCategorizedOtherWorkout;
@property(readonly, nonatomic) _Bool isIndoor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2 metadata:(id)arg3;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
- (id)allAvailableMetrics;
- (id)defaultEnabledMetrics;
- (id)_defaultEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_indoorDefaultEnabledMetricsForActivityType:(unsigned long long)arg1;

@end

