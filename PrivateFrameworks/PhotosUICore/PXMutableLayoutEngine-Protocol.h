//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXLayoutDataSourceChangeDetails, PXLayoutEngineDataSourceSnapshot, PXLayoutItem;

@protocol PXMutableLayoutEngine <NSObject>
@property(retain, nonatomic) id <PXLayoutItem> seedItem;
- (void)setDataSourceSnapshot:(id <PXLayoutEngineDataSourceSnapshot>)arg1 withChangeDetails:(id <PXLayoutDataSourceChangeDetails>)arg2;
@end
