//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet, TIInputContextHistory;

@interface UIInputContextHistory : NSObject
{
    TIInputContextHistory *_tiInputContextHistory;
}

@property(readonly, nonatomic) TIInputContextHistory *tiInputContextHistory; // @synthesize tiInputContextHistory=_tiInputContextHistory;
- (void).cxx_destruct;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
@property(readonly, nonatomic) NSSet *recipientIdentifiers;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1;

@end
