//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKUIViewControllerClickableRootView.h>

@class MKPlaceInlineMapViewController, MKViewWithHairline, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView
{
    MKViewWithHairline *_hairlineView;
    UIImageView *_mapView;
    MKPlaceInlineMapViewController *_viewController;
}

@property(nonatomic) __weak MKPlaceInlineMapViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) UIImage *map;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
