//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIBarButtonItem, UITextView;

@interface _PXConsoleViewController : UIViewController
{
    UITextView *__textView;
    UIBarButtonItem *__shareBarButtonItem;
}

@property(readonly, nonatomic) UIBarButtonItem *_shareBarButtonItem; // @synthesize _shareBarButtonItem=__shareBarButtonItem;
- (void).cxx_destruct;
- (void)_presentSharingViewController:(id)arg1;
@property(readonly, nonatomic) UITextView *_textView; // @synthesize _textView=__textView;
- (void)appendOutput:(id)arg1;
- (void)loadView;
- (id)init;

@end

