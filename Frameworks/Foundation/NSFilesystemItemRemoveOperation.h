//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemRemoveOperation : NSOperation
{
    id _delegate;
    NSString *_removePath;
    NSError *_error;
    void *_state;
    _Bool _filterUnderbars;
}

+ (id)filesystemItemRemoveOperationWithPath:(id)arg1;
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
- (void)dealloc;
- (void)main;
- (id)initWithPath:(id)arg1;
- (_Bool)_filtersUnderbars;
- (void)_setFilterUnderbars:(_Bool)arg1;
- (void)_setError:(id)arg1;
- (id)error;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

