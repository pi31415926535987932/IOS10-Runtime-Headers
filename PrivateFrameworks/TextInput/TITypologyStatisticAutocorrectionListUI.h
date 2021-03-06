//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TITypologyStatistic.h>

@interface TITypologyStatisticAutocorrectionListUI : TITypologyStatistic
{
    _Bool _didSetListUIDisplayed;
    _Bool _listUIDisplayed;
    long long _inputsWhileHidden;
    long long _inputsWhileDisplayed;
    long long _hiddenToDisplayed;
    long long _displayedToHidden;
}

@property(readonly, nonatomic) long long displayedToHidden; // @synthesize displayedToHidden=_displayedToHidden;
@property(readonly, nonatomic) long long hiddenToDisplayed; // @synthesize hiddenToDisplayed=_hiddenToDisplayed;
@property(readonly, nonatomic) long long inputsWhileDisplayed; // @synthesize inputsWhileDisplayed=_inputsWhileDisplayed;
@property(readonly, nonatomic) long long inputsWhileHidden; // @synthesize inputsWhileHidden=_inputsWhileHidden;
- (void)visitRecordAutocorrections:(id)arg1;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)visitRecordSync:(id)arg1;
- (void)setListUIDisplayed:(_Bool)arg1;
- (void)addInputCount;
- (id)structuredReport;

@end

