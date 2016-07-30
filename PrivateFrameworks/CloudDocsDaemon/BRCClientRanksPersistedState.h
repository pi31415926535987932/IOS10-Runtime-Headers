//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCAccountSession;

__attribute__((visibility("hidden")))
@interface BRCClientRanksPersistedState : NSObject <NSSecureCoding>
{
    BRCAccountSession *_session;
    unsigned long long _nextItemRowID;
    unsigned long long _nextNotifRank;
    unsigned long long _nextPackageItemRank;
}

+ (_Bool)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)description;
@property(nonatomic) unsigned long long nextPackageItemRank;
- (unsigned long long)allocatePackageItemRank;
@property(nonatomic) unsigned long long nextNotifRank;
- (unsigned long long)allocateNotifRank;
- (unsigned long long)allocateItemRowID;
@property(readonly, nonatomic) unsigned long long nextItemRowID;

@end
