//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface QLICSItemViewController : QLItemViewController
{
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (id)scrollView;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canSwipeToDismiss;
- (_Bool)canEnterFullScreen;

@end
