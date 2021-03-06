//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface _LSDService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

+ (id)XPCConnectionToService;
+ (void)beginListeningWithAllServices;
+ (id)allServiceClasses;
+ (id)XPCInterface;
+ (Class)clientClass;
+ (id)serviceName;
+ (id)dispatchQueue;
+ (_Bool)XPCConnectionIsAlwaysPrivileged;
+ (_Bool)isEnabled;
+ (id)synchronousXPCProxyWithErrorHandler:(CDUnknownBlockType)arg1;
+ (id)XPCProxyWithErrorHandler:(CDUnknownBlockType)arg1;
+ (id)XPCProxyWithSelector:(SEL)arg1 errorHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSXPCListener *XPCListener; // @synthesize XPCListener=_listener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithXPCListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

