//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFullFontSize : NSObject
{
    double _value;
    _Bool _isDefault;
    _Bool _needsEvaluation;
}

+ (id)defaultValue;
+ (id)valued:(double)arg1;
- (double)valueWithEvaluationIfNeeded:(CDUnknownBlockType)arg1;
- (_Bool)setNeedsEvaluation;
- (_Bool)needsEvaluation;
- (id)overrideUnlessDefault:(double)arg1;
- (id)initWithValue:(double)arg1 isDefault:(_Bool)arg2;

@end
