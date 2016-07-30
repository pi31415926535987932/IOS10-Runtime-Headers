//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssertionServices/BKSProcessAssertionUpdateEvent.h>

#import <AssertionServices/BSXPCCoding-Protocol.h>

@class NSString;

@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent <BSXPCCoding>
{
    unsigned int _reason;
    NSString *_targetBundleIdentifier;
    int _targetPID;
}

@property(nonatomic) int targetPID; // @synthesize targetPID=_targetPID;
@property(copy, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_targetBundleIdentifier;
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
