//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface RCAudioRouteBarButton : UIButton
{
    _Bool _needsUpdateDisplay;
    UIColor *_routeToSpeakerOrWirelessColor;
    UIColor *_routeToHandsetOrHeadphoneColor;
}

@property(retain, nonatomic) UIColor *routeToHandsetOrHeadphoneColor; // @synthesize routeToHandsetOrHeadphoneColor=_routeToHandsetOrHeadphoneColor;
@property(retain, nonatomic) UIColor *routeToSpeakerOrWirelessColor; // @synthesize routeToSpeakerOrWirelessColor=_routeToSpeakerOrWirelessColor;
- (void).cxx_destruct;
- (void)setNeedsUpdateDisplay;
- (void)updateDisplay;
- (id)initWithFrame:(struct CGRect)arg1;

@end

