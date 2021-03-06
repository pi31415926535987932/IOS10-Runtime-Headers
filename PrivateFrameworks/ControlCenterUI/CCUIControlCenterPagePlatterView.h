//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NCMaterialView, NSLayoutConstraint, NSSet, UIImageView;

@interface CCUIControlCenterPagePlatterView : UIView
{
    NCMaterialView *_baseMaterialView;
    UIImageView *_whiteLayerView;
    UIView *_contentView;
    NSSet *_renderedPunchOutMasks;
    NSLayoutConstraint *_topMargin;
    NSLayoutConstraint *_bottomMargin;
    NSLayoutConstraint *_leadingMargin;
    NSLayoutConstraint *_trailingMargin;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_rerenderPunchThroughMaskIfNecessary;
- (_Bool)_searchForUpdatedMask;
- (void)_recursivelyVisitSubviewsOfView:(id)arg1 forPunchedThroughView:(id)arg2 collectingMasksIn:(id)arg3;
- (id)ccuiPunchOutMaskedContainer;
- (void)layoutSubviews;
@property(nonatomic) struct UIEdgeInsets marginInsets;
- (id)initWithFrame:(struct CGRect)arg1;

@end

