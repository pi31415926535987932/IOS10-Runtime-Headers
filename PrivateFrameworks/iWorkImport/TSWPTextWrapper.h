//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPTextWrapper : NSObject
{
}

+ (double)p_skipHintForRect:(struct CGRect)arg1 wrapSegments:(id)arg2 type:(int)arg3;
+ (double)unobstructedSpanForWrapSegments:(id)arg1 startingSpan:(struct CGRect)arg2 columnBounds:(struct CGRect)arg3;
+ (unsigned int)splitLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 wrapSegments:(id)arg3 type:(int)arg4 skipHint:(double *)arg5;

@end

