//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class AVURLAsset, NSData, NSDictionary, NSError, NSString, NSURL, NSURLRequest, NSURLResponse;

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding>
{
    _Bool _hasStarted;
    _Bool _expectingResumeCallback;
    _Bool _establishedConnection;
    _Bool _disablesRetry;
    _Bool _shouldCancelOnDisconnect;
    _Bool _discretionary;
    _Bool _mayBeDemotedToDiscretionary;
    _Bool _initializedFromToken;
    unsigned long long _identifier;
    unsigned long long _taskKind;
    double _creationTime;
    long long _state;
    unsigned long long _suspendCount;
    NSString *_taskDescription;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSError *_error;
    NSURL *_fileURL;
    NSURL *_downloadFileURL;
    NSString *_bundleID;
    NSString *_sessionID;
    unsigned long long _retryCount;
    unsigned long long _lowThroughputTimerRetryCount;
    long long _basePriority;
    NSString *_uniqueIdentifier;
    NSString *_storagePartitionIdentifier;
    long long _bytesPerSecondLimit;
    double _loadingPriority;
    NSString *_pathToDownloadTaskFile;
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSURL *_destinationURL;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    NSDictionary *_options;
    unsigned long long _downloadTokenFromInitialization;
    AVURLAsset *_AVURLAsset;
    NSURL *_temporaryDestinationURL;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    NSDictionary *__backgroundTaskTimingData;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSDictionary *_backgroundTaskTimingData; // @synthesize _backgroundTaskTimingData=__backgroundTaskTimingData;
@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property(copy) NSURL *temporaryDestinationURL; // @synthesize temporaryDestinationURL=_temporaryDestinationURL;
@property _Bool initializedFromToken; // @synthesize initializedFromToken=_initializedFromToken;
@property(retain) AVURLAsset *AVURLAsset; // @synthesize AVURLAsset=_AVURLAsset;
@property unsigned long long downloadTokenFromInitialization; // @synthesize downloadTokenFromInitialization=_downloadTokenFromInitialization;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSData *assetArtworkData; // @synthesize assetArtworkData=_assetArtworkData;
@property(copy) NSString *assetTitle; // @synthesize assetTitle=_assetTitle;
@property(copy) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
@property unsigned long long AVAssetDownloadToken; // @synthesize AVAssetDownloadToken=_AVAssetDownloadToken;
@property(copy) NSString *pathToDownloadTaskFile; // @synthesize pathToDownloadTaskFile=_pathToDownloadTaskFile;
@property _Bool mayBeDemotedToDiscretionary; // @synthesize mayBeDemotedToDiscretionary=_mayBeDemotedToDiscretionary;
@property double loadingPriority; // @synthesize loadingPriority=_loadingPriority;
@property long long bytesPerSecondLimit; // @synthesize bytesPerSecondLimit=_bytesPerSecondLimit;
@property(copy) NSString *storagePartitionIdentifier; // @synthesize storagePartitionIdentifier=_storagePartitionIdentifier;
@property(copy) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(getter=isDiscretionary) _Bool discretionary; // @synthesize discretionary=_discretionary;
@property long long basePriority; // @synthesize basePriority=_basePriority;
@property _Bool shouldCancelOnDisconnect; // @synthesize shouldCancelOnDisconnect=_shouldCancelOnDisconnect;
@property _Bool disablesRetry; // @synthesize disablesRetry=_disablesRetry;
@property unsigned long long lowThroughputTimerRetryCount; // @synthesize lowThroughputTimerRetryCount=_lowThroughputTimerRetryCount;
@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property _Bool establishedConnection; // @synthesize establishedConnection=_establishedConnection;
@property _Bool expectingResumeCallback; // @synthesize expectingResumeCallback=_expectingResumeCallback;
@property _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy) NSURL *downloadFileURL; // @synthesize downloadFileURL=_downloadFileURL;
@property(copy) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSURLResponse *response; // @synthesize response=_response;
@property(copy) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(copy) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property unsigned long long suspendCount; // @synthesize suspendCount=_suspendCount;
@property long long state; // @synthesize state=_state;
@property double creationTime; // @synthesize creationTime=_creationTime;
@property unsigned long long taskKind; // @synthesize taskKind=_taskKind;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAVAssetDownloadURL:(id)arg1 destinationURL:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 taskIdentifier:(unsigned long long)arg6 bundleID:(id)arg7 sessionID:(id)arg8;
- (void)dealloc;
- (id)initWithDownloadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithUploadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithDataTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;

@end

