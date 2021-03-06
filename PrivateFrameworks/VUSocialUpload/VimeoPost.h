//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ALAsset, ALAssetsLibrary, NSArray, NSData, NSString, NSURL, VUDataReader;
@protocol VimeoPostDelegate;

@interface VimeoPost : NSObject
{
    NSURL *_baseURL;
    int _uploadState;
    NSString *_videoID;
    NSString *_ticketID;
    NSURL *_uploadEndpoint;
    _Bool _continuingUpload;
    unsigned long long _countOfBytesStored;
    int _retryCount;
    _Bool _canUploadOverCellular;
    ALAssetsLibrary *_assetsLibrary;
    id <VimeoPostDelegate> _delegate;
    NSURL *_assetURL;
    NSData *_assetData;
    NSString *_title;
    NSString *_postDescription;
    NSArray *_tags;
    unsigned long long _accessType;
    long long _videoSize;
    long long _privacySettings;
    ACAccount *_account;
    ALAsset *_asset;
    NSURL *_exportedVideoURL;
    VUDataReader *_dataReader;
}

+ (id)dictionaryWithResponseData:(id)arg1 error:(id *)arg2;
+ (void)getAvailableQuotaForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)_isUsingCellular;
@property(retain, nonatomic) VUDataReader *dataReader; // @synthesize dataReader=_dataReader;
@property(retain, nonatomic) NSURL *exportedVideoURL; // @synthesize exportedVideoURL=_exportedVideoURL;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) long long privacySettings; // @synthesize privacySettings=_privacySettings;
@property(nonatomic) long long videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned long long accessType; // @synthesize accessType=_accessType;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *postDescription; // @synthesize postDescription=_postDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) __weak id <VimeoPostDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)failWithErrorCode:(int)arg1;
- (void)failWithError:(id)arg1;
- (void)_warningWithCode:(int)arg1;
- (id)_tags;
- (void)_setPrivacy;
- (void)_setTags;
- (void)_setDescription;
- (void)_setTitle;
- (void)_commit;
- (void)_verify;
- (void)_uploadData;
- (void)_getTicket;
- (void)_checkQuota;
- (unsigned long long)postSize;
- (_Bool)uploadToAccount:(id)arg1 error:(id *)arg2;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)assetsLibrary;
- (void)_cleanup;
- (id)init;

@end

