//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSIndexPath, SKUIIndexBarControlController, SKUIIndexBarEntryDescriptor;

@protocol SKUIIndexBarControlControllerDataSource <NSObject>
- (SKUIIndexBarEntryDescriptor *)indexBarControlController:(SKUIIndexBarControlController *)arg1 entryDescriptorAtIndexPath:(NSIndexPath *)arg2;
- (long long)indexBarControlController:(SKUIIndexBarControlController *)arg1 numberOfEntryDescriptorsInSection:(long long)arg2;

@optional
- (long long)numberOfSectionsInIndexBarControlController:(SKUIIndexBarControlController *)arg1;
- (SKUIIndexBarEntryDescriptor *)combinedEntryDescriptorForIndexBarControlController:(SKUIIndexBarControlController *)arg1;
@end

