//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOPDSimpleRestaurantMenuTextGroup : PBCodable <NSCopying>
{
    NSMutableArray *_menuItems;
    NSString *_title;
}

+ (Class)menuItemType;
@property(retain, nonatomic) NSMutableArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)menuItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)menuItemsCount;
- (void)addMenuItem:(id)arg1;
- (void)clearMenuItems;
@property(readonly, nonatomic) _Bool hasTitle;
- (void)dealloc;

@end
