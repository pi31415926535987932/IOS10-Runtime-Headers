//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMEventTrigger.h>

#import <Home/HFTriggerProtocol-Protocol.h>

@class NSString;

@interface HMEventTrigger (HFEventTriggerAdditions) <HFTriggerProtocol>
+ (id)_hf_localizedStringOrNilIfNotFoundForKey:(id)arg1;
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValue:(id)arg2;
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 nonAlarmCharacteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 alarmCharacteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 characteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 region:(id)arg2 type:(unsigned long long)arg3;
- (unsigned long long)hf_triggerType;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
