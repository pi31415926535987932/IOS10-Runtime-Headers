//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class CoreDAVContainerInfoSyncTaskGroup, NSArray, NSError, NSString;

@protocol CoreDAVContainerInfoSyncProvider <CoreDAVTaskGroupDelegate>
- (void)containerInfoSyncTask:(CoreDAVContainerInfoSyncTaskGroup *)arg1 completedWithNewSyncToken:(NSString *)arg2 error:(NSError *)arg3;
- (void)containerInfoSyncTask:(CoreDAVContainerInfoSyncTaskGroup *)arg1 retrievedAddedOrModifiedContainers:(NSArray *)arg2 removedContainerURLs:(NSArray *)arg3;
@end

