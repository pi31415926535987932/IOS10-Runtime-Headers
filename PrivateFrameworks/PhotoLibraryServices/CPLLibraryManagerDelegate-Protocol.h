//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class CPLLibraryManager, NSString;

@protocol CPLLibraryManagerDelegate <NSObject>
- (void)libraryManagerHasChangesToPull:(CPLLibraryManager *)arg1;
- (void)libraryManagerDidStartSynchronization:(CPLLibraryManager *)arg1;
- (void)libraryManagerStatusDidChange:(CPLLibraryManager *)arg1;

@optional
- (NSString *)displayableName;
- (void)libraryManagerDidChangeConfiguration:(CPLLibraryManager *)arg1;
@end

