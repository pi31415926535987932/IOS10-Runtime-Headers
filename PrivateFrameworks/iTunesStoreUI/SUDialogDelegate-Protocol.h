//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class SUDialog;

@protocol SUDialogDelegate <NSObject>

@optional
- (void)dialogDidCancel:(SUDialog *)arg1;
- (void)dialog:(SUDialog *)arg1 didDismissWithButtonIndex:(long long)arg2;
@end
