//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantUI/FBSDisplayLayoutObserver-Protocol.h>

@class BKSApplicationStateMonitor, NSMutableArray, NSString;

@interface AFUIApplicationStateHelper : NSObject <FBSDisplayLayoutObserver>
{
    BKSApplicationStateMonitor *_appStateMonitor;
    NSMutableArray *_foregroundAppInfos;
}

- (void).cxx_destruct;
- (void)_appInfoDictionariesForDisplayLayout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateForAppInfoDictionaries:(id)arg1;
- (void)_handleApplicationStateUpdate:(id)arg1;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (id)foregroundAppInfos;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
