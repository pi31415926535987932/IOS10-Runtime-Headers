//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

@class SKUIDeveloperInfo, SKUIDeveloperInfoView, UIScrollView;

@interface SKUIDeveloperInfoViewController : SKUIViewController
{
    SKUIDeveloperInfo *_developerInfo;
    SKUIDeveloperInfoView *_infoView;
    UIScrollView *_scrollView;
}

@property(readonly, nonatomic) SKUIDeveloperInfo *developerInfo; // @synthesize developerInfo=_developerInfo;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithDeveloperInfo:(id)arg1;

@end

