//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class UIBarButtonItem;

@interface PTSettingsController : UINavigationController
{
    UIBarButtonItem *_dismissButton;
}

@property(retain, nonatomic) UIBarButtonItem *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void).cxx_destruct;
- (void)_dismiss;
- (id)_defaultDismissButton;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootModuleController:(id)arg1;
- (id)initWithRootSettings:(id)arg1;

@end

