//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/MSVOperation.h>

@class MPModelLibraryKeepLocalChangeRequest, MSVOperationQueue;

@interface MPModelLibraryKeepLocalChangeRequestOperation : MSVOperation
{
    MSVOperationQueue *_operationQueue;
    CDUnknownBlockType _responseHandler;
    MPModelLibraryKeepLocalChangeRequest *_request;
}

@property(copy, nonatomic) MPModelLibraryKeepLocalChangeRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
- (void).cxx_destruct;
- (void)_handleKeepLocalUpdateCompleteWithError:(id)arg1;
- (void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 keepLocal:(long long)arg3 mediaLibrary:(id)arg4;
- (void)execute;

@end
