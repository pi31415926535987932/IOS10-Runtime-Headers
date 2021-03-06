//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface INRideFareLineItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;
    NSDecimalNumber *_price;
    NSString *_currencyCode;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, nonatomic) NSDecimalNumber *price; // @synthesize price=_price;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 price:(id)arg2 currencyCode:(id)arg3;

@end

