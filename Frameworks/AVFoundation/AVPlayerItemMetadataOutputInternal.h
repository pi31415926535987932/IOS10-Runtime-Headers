//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray;
@protocol OS_dispatch_queue;

@interface AVPlayerItemMetadataOutputInternal : NSObject
{
    NSArray *metadataIdentifiers;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSObject<OS_dispatch_queue> *accumulationQueue;
    AVWeakReference *weakReferenceToHost;
    double advanceInterval;
    struct __CFDictionary *accumulatedMetadataGroups;
}

@end

