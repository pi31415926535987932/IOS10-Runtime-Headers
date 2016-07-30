//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFButton.h>

#import <ControlCenterUIKit/CCUIControlCenterControl-Protocol.h>

@class NSString, UIColor, UIFont, UIImage, UIImageView, UILabel;
@protocol CCUIControlCenterButtonDelegate;

@interface CCUIControlCenterButton : SBFButton <CCUIControlCenterControl>
{
    unsigned long long _buttonType;
    UIColor *_selectedColor;
    UIImageView *_glyphImageView;
    UILabel *_label;
    UIImageView *_alteredStateGlyphImageView;
    UILabel *_alteredStateLabel;
    UIImageView *_selectedBackgroundImageView;
    UIImageView *_backgroundImageView;
    _Bool _animatesStateChanges;
    _Bool _showingMenu;
    id <CCUIControlCenterButtonDelegate> _delegate;
    unsigned long long _roundCorners;
    UIImage *_selectedBackgroundImage;
    UIImage *_backgroundImage;
    UIImage *_glyphImage;
    UIImage *_selectedGlyphImage;
    NSString *_glyphName;
    double _naturalHeight;
}

+ (id)_buttonWithGlyphImage:(id)arg1 selectedColor:(id)arg2 text:(id)arg3 type:(unsigned long long)arg4;
+ (id)roundRectButtonWithText:(id)arg1 selectedGlyphColor:(id)arg2;
+ (id)roundRectButtonWithText:(id)arg1;
+ (id)roundRectButton;
+ (id)circularButtonWithSelectedColor:(id)arg1;
+ (id)smallCircularButtonWithSelectedColor:(id)arg1;
+ (id)_roundRectBackgroundImageWithRoundCorners:(unsigned long long)arg1;
+ (id)_circleBackgroundOverlayImageForDiameter:(double)arg1;
@property(nonatomic) double naturalHeight; // @synthesize naturalHeight=_naturalHeight;
@property(copy, nonatomic) NSString *glyphName; // @synthesize glyphName=_glyphName;
@property(retain, nonatomic) UIImage *selectedGlyphImage; // @synthesize selectedGlyphImage=_selectedGlyphImage;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *selectedBackgroundImage; // @synthesize selectedBackgroundImage=_selectedBackgroundImage;
@property(nonatomic, getter=isShowingMenu) _Bool showingMenu; // @synthesize showingMenu=_showingMenu;
@property(nonatomic) unsigned long long roundCorners; // @synthesize roundCorners=_roundCorners;
@property(nonatomic) _Bool animatesStateChanges; // @synthesize animatesStateChanges=_animatesStateChanges;
@property(nonatomic) __weak id <CCUIControlCenterButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateForReduceTransparencyChange;
- (void)_updateEffects;
- (id)ccuiPunchOutMaskForView:(id)arg1;
- (void)didMoveToSuperview;
- (void)setEnabled:(_Bool)arg1;
- (void)_pressAction;
- (void)_setBackgroundImageAndStuff:(id)arg1;
- (void)_setSelectedBackgroundImageAndStuff:(id)arg1;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2 name:(id)arg3;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)_updateForStateChange;
- (void)_updateBackgroundForStateChange;
- (void)_updateGlyphAndTextForStateChange;
- (long long)_currentState;
- (_Bool)_drawingAsSelected;
- (void)_updateNaturalHeight;
- (id)_glyphImageForState:(long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) long long numberOfLines; // @dynamic numberOfLines;
@property(retain, nonatomic) UIFont *font; // @dynamic font;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_isTextButton;
- (_Bool)_isRectButton;
- (_Bool)_isCircleButton;
- (void)_setButtonType:(unsigned long long)arg1;
- (void)_calculateRectForGlyph:(struct CGRect *)arg1 rectForLabel:(struct CGRect *)arg2 ignoringBounds:(_Bool)arg3;
- (id)_colorOverlayBackgroundImage;
@property(readonly, nonatomic, getter=isInternal) _Bool internal;
- (struct CGSize)intrinsicContentSize;
- (id)_controlStateStringFromState:(long long)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 glyphImage:(id)arg2 selectedColor:(id)arg3 text:(id)arg4 type:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
