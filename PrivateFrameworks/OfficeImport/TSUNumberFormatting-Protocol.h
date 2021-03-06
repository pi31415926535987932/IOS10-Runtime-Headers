//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/NSObject-Protocol.h>
#import <OfficeImport/TSUDataFormat-Protocol.h>

@class NSArray, NSString, OITSULocale;

@protocol TSUNumberFormatting <TSUDataFormat, NSObject>
- (_Bool)isEquivalent:(id)arg1;
- (NSString *)stringFromString:(NSString *)arg1;
- (NSString *)stringFromDouble:(double)arg1 locale:(OITSULocale *)arg2;
- (_Bool)usesTabs;
- (_Bool)hasValidDecimalPlaces;
- (void)setFormatName:(NSString *)arg1;
- (_Bool)baseUseMinusSign;
- (unsigned short)basePlaces;
- (unsigned short)base;
- (_Bool)customFormatShouldAutoInsertPercentSymbol;
- (_Bool)usesTextFormatForValue:(double)arg1;
- (_Bool)canFormatText;
- (_Bool)isTextFormat;
- (double)scaleFactor;
- (_Bool)usesAccountingStyle;
- (int)fractionAccuracy;
- (_Bool)showThousandsSeparator;
- (int)negativeStyle;
- (NSString *)currencyCode;
- (NSString *)formatString;
- (NSString *)suffixString;
- (unsigned short)decimalPlaces;
- (int)valueType;
- (NSArray *)customNumberFormatTokens;
- (_Bool)isCustom;
- (NSString *)formatName;
@end

