//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VMUFieldInfo;

__attribute__((visibility("hidden")))
@interface VMUFieldValue : NSObject
{
    VMUFieldInfo *_field;
    unsigned long long _value;
}

@property(readonly, nonatomic) unsigned long long value;
@property(readonly, nonatomic) VMUFieldInfo *field;
- (void)dealloc;
- (id)initWithField:(id)arg1 value:(unsigned long long)arg2;

@end

