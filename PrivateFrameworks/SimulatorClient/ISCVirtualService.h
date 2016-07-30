//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ISCVirtualServiceProvider;

@interface ISCVirtualService : NSObject
{
    NSString *_identifier;
    struct __IOHIDService *_hidService;
    struct __IOHIDEventSystem *_hidEventSystem;
    id <ISCVirtualServiceProvider> _hidCallbackDelegate;
}

+ (id)upstream;
+ (id)serviceWithIdentifier:(id)arg1 eventSystem:(struct __IOHIDEventSystem *)arg2 callbackDelegate:(id)arg3;
@property(retain, nonatomic) id <ISCVirtualServiceProvider> hidCallbackDelegate; // @synthesize hidCallbackDelegate=_hidCallbackDelegate;
@property(nonatomic) struct __IOHIDEventSystem *hidEventSystem; // @synthesize hidEventSystem=_hidEventSystem;
@property(nonatomic) struct __IOHIDService *hidService; // @synthesize hidService=_hidService;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)dispatchEvent:(struct __IOHIDEvent *)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 eventSystem:(struct __IOHIDEventSystem *)arg2 callbackDelegate:(id)arg3;
- (id)init;

@end
