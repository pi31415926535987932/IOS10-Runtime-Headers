//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCoding-Protocol.h>

@protocol NSISVariableDelegate;

@interface NSISVariable : NSObject <NSCoding>
{
    id <NSISVariableDelegate> _delegate;
    int _refCount;
    unsigned int _ident;
}

+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3 valueIsUserObservable:(_Bool)arg4;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
@property id <NSISVariableDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)markedConstraint;
@property(readonly) _Bool shouldBeMinimized;
@property(readonly) int valueRestriction;
- (_Bool)valueIsUserVisible;
- (_Bool)markedConstraintIsEligibleForIntegralizationAdjustment;
- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (_Bool)shouldBeIntegral;
- (id)description;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

