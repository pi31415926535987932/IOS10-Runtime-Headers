//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKMapItem, MKPlacePhotosView, UIImageView;
@protocol GEOMapItemPhoto;

@protocol MKPlacePhotosViewDelegate <NSObject>
- (MKMapItem *)placePhotoViewerGetDelegatesMapItem;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id <GEOMapItemPhoto>)arg2;
- (UIImageView *)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;

@optional
- (void)placePhotoViewerWillClose:(MKPlacePhotosView *)arg1 photo:(id <GEOMapItemPhoto>)arg2 onIndex:(unsigned long long)arg3;
@end

