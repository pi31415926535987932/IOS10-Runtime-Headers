//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol QLPreviewControllerStateProtocol;

__attribute__((visibility("hidden")))
@interface QLStateManagerProxy : NSObject
{
    id <QLPreviewControllerStateProtocol> _stateManager;
}

@property __weak id <QLPreviewControllerStateProtocol> stateManager; // @synthesize stateManager=_stateManager;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dropMethod;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

@end
