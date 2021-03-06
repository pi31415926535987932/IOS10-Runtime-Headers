//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class CLKComplicationTemplate;

@interface NTKCompanionComplicationDataSource : NTKComplicationDataSource
{
    CLKComplicationTemplate *_complicationTemplate;
}

+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2;
- (void).cxx_destruct;
- (id)_breathingTemplate;
- (id)_reminderTemplate;
- (id)_workoutTemplate;
- (id)_musicTemplate;
- (id)_worldClockTemplate;
- (id)_alarmTemplate;
- (id)_stopwatchTemplate;
- (id)_timerTemplate;
- (id)_displayDate;
- (id)_moonPhaseTemplate;
- (id)_nextEventTemplate;
- (id)_wellnessTemplate;
- (id)_sunriseTemplate;
- (id)_batteryTemplate;
- (id)_weatherConditionsTemplate;
- (id)_weatherTemplate;
- (id)_temperatureStringForDegreesFahrenheit:(long long)arg1 convertToCelsius:(_Bool)arg2;
- (id)_dateTemplate;
- (id)currentSwitcherTemplate;

@end

