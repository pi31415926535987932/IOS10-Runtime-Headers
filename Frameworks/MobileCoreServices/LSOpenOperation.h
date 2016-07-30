//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError, NSString, NSURL, NSXPCConnection;
@protocol LSOpenResourceOperationDelegate;

__attribute__((visibility("hidden")))
@interface LSOpenOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    _Bool _sourceIsManaged;
    _Bool _userSpecifiedApp;
    NSURL *_resourceURL;
    NSString *_applicationIdentifier;
    NSString *_documentIdentifier;
    NSDictionary *_userInfoPlist;
    NSDictionary *_options;
    id <LSOpenResourceOperationDelegate> _delegate;
    _Bool _didSucceed;
    NSError *_error;
    NSXPCConnection *_XPCConnection;
}

+ (id)queue;
@property(retain, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
- (void)main;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)completeOperation;
- (void)dealloc;
- (id)initForOpeningResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(_Bool)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;
- (_Bool)performAppLinkOpen;

@end
