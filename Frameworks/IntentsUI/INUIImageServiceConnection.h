//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface INUIImageServiceConnection : NSObject
{
    NSXPCConnection *_underlyingConnection;
}

+ (id)sharedConnection;
- (void).cxx_destruct;
- (void)loadUIImageForINImage:(id)arg1 traitCollection:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_init;
- (void)dealloc;
- (id)init;

@end

