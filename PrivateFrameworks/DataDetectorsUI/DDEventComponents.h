//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DataDetectorsUI/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface DDEventComponents : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_eventTypeIdentifier;
    NSDate *_startDate;
    NSDate *_endDate;
    struct _NSRange _originRange;
    long long _source;
}

+ (id)_eventsFromIntelligentsuggestions:(id)arg1;
+ (id)_eventsFromNaturalLanguageText:(id)arg1;
+ (id)_eventComponents:(id)arg1 matchingResult:(struct __DDResult *)arg2;
+ (id)bestEventComponentsForResult:(struct __DDResult *)arg1 withNaturalLanguageContext:(id)arg2 suggestionsContext:(id)arg3;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) struct _NSRange originRange; // @synthesize originRange=_originRange;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *eventTypeIdentifier; // @synthesize eventTypeIdentifier=_eventTypeIdentifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

