//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface PTSImagePreviewCell : UITableViewCell
{
    UIImageView *_imageViewOnLight;
    UIImageView *_imageViewOnDark;
    UIView *_lightBackground;
    UIView *_darkBackground;
    UILabel *_imageNameLabel;
    UIImage *_previewImage;
}

+ (void)_getLeftFrame:(struct CGRect *)arg1 rightFrame:(struct CGRect *)arg2 forImage:(id)arg3 inBounds:(struct CGRect)arg4;
+ (double)heightForImage:(id)arg1;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *imageName;
- (id)initWithReuseIdentifier:(id)arg1;

@end

