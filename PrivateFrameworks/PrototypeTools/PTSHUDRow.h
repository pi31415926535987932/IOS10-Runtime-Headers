//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PTSHUDRow : NSObject
{
    double _height;
    NSArray *_controls;
}

+ (id)savedModeFooterRow;
+ (id)savedModeTableRow;
+ (id)savedModeHeaderRow;
+ (id)controlsModeFooterRow;
+ (id)controlsModeHeaderRow;
+ (id)rowWithControls:(id)arg1;
+ (id)rowWithHeight:(double)arg1 controls:(id)arg2;
@property(retain, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;

@end

