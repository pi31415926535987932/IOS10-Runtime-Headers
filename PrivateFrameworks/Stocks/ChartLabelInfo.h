//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ChartLabelInfo : NSObject
{
    NSString *_string;
    struct CGSize _size;
    double _position;
    _Bool _immutable;
}

@property(readonly, nonatomic) _Bool immutable; // @synthesize immutable=_immutable;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)retainStringAndSizeFromLabelInfo:(id)arg1;
- (void)setStringToYearWithDate:(id)arg1 timeZone:(id)arg2;
- (void)setStringToMonthAndDayWithDate:(id)arg1 timeZone:(id)arg2;
- (void)setImmutable:(_Bool)arg1;

@end

