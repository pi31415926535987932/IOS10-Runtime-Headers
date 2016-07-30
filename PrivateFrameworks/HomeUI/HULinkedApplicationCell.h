//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HULinkedApplicationRatingView, NSArray, NSNumber, NSString, NSURL, UIButton, UIImage, UIImageView, UILabel;

@interface HULinkedApplicationCell : UITableViewCell
{
    _Bool _isInstalled;
    UIImage *_applicationIcon;
    NSString *_applicationBundleID;
    NSURL *_storeURL;
    NSString *_applicationName;
    NSString *_publisherName;
    NSNumber *_averageUserRating;
    NSString *_price;
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_publisherLabel;
    HULinkedApplicationRatingView *_ratingView;
    UILabel *_priceLabel;
    UILabel *_installedLabel;
    UIButton *_viewButton;
    NSArray *_currentConstraints;
}

@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(retain, nonatomic) UIButton *viewButton; // @synthesize viewButton=_viewButton;
@property(retain, nonatomic) UILabel *installedLabel; // @synthesize installedLabel=_installedLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) HULinkedApplicationRatingView *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) UILabel *publisherLabel; // @synthesize publisherLabel=_publisherLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSNumber *averageUserRating; // @synthesize averageUserRating=_averageUserRating;
@property(copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(copy, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(copy, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(retain, nonatomic) UIImage *applicationIcon; // @synthesize applicationIcon=_applicationIcon;
- (void).cxx_destruct;
- (void)viewButtonTapped:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
