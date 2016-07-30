//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSMutableArray, TSTMasterLayout;

__attribute__((visibility("hidden")))
@interface TSTLayoutTask : NSObject <NSCopying>
{
    TSTMasterLayout *mMasterLayout;
    NSMutableArray *mCellStatesToLayout;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeToMasterLayoutCaches;
- (void)enumerateCellStatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)clear;
- (void)addCellState:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfCellStates;
- (void)dealloc;
- (id)initWithLayoutTask:(id)arg1;
- (id)initWithMasterLayout:(id)arg1;

@end
