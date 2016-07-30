//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSArray;

@interface SKUINavigationBarMenusView : SKUIViewReuseView
{
    SEL _buttonAction;
    id _buttonTarget;
    struct UIEdgeInsets _contentInset;
    NSArray *_menuViewElements;
}

+ (id)_attributedStringWithMenuItem:(id)arg1 context:(id)arg2;
+ (void)requestLayoutWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)reloadWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3;

@end
