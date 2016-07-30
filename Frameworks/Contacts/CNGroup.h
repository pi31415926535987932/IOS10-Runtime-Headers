//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSMutableCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_identifier;
    int _iOSLegacyIdentifier;
    NSString *_name;
    CNGroup *_snapshot;
    NSDate *_creationDate;
    NSDate *_modificationDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)identifierProvider;
+ (id)localizedStringForKey:(id)arg1;
+ (id)predicateForGroupsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForGroupsWithIdentifiers:(id)arg1;
+ (id)predicateForiOSLegacyIdentifier:(int)arg1;
+ (id)predicateForGroupWithNameMatching:(id)arg1;
+ (id)predicateForGroupsWithNameMatching:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) int iOSLegacyIdentifier; // @synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) CNGroup *snapshot;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end
