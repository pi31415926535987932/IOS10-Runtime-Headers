//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CPLResource, NSArray, NSString, NSURL;

@protocol CPLDaemonLibraryManagerMinimalProtocol
- (void)addInfoToLog:(NSString *)arg1;
- (void)compactFileCacheWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)getResourcesForItemWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *, NSArray *))arg2;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(NSString *)arg1 related:(_Bool)arg2 completionHandler:(void (^)(id, id, NSError *))arg3;
- (void)getCloudCacheForRecordWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(CPLRecordChange *, NSError *))arg2;
- (void)getStatusArrayForComponents:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getStatusForComponents:(NSArray *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)getListOfComponentsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setDiagnosticsEnabled:(_Bool)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)enableSynchronizationWithReason:(NSString *)arg1;
- (void)disableSynchronizationWithReason:(NSString *)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)resetStatus;
- (void)startSyncSession;
- (void)cancelTaskWithIdentifier:(NSString *)arg1;
- (void)getMappedIdentifiersForIdentifiers:(NSArray *)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)beginInMemoryDownloadOfResource:(CPLResource *)arg1 reply:(void (^)(NSString *))arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, unsigned long long, NSError *))arg3;
- (void)publishResource:(CPLResource *)arg1 completionHandler:(void (^)(NSURL *, NSDate *, NSError *))arg2;
- (void)beginDownloadForResource:(CPLResource *)arg1 clientBundleID:(NSString *)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(NSString *)arg4 reply:(void (^)(NSString *))arg5;
- (void)deactivateLibraryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)closeLibraryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)openLibraryWithClientLibraryBaseURL:(NSURL *)arg1 cloudLibraryStateStorageURL:(NSURL *)arg2 cloudLibraryResourceStorageURL:(NSURL *)arg3 libraryIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSError *, NSDictionary *, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, NSString *, NSString *, NSURL *))arg5;
@end
