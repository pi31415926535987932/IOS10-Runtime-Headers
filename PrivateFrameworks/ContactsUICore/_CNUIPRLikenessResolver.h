//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessResolver-Protocol.h>

@class CNContactStore, CNUIMeContactMonitor, CNUIPRPersonaStoreObservableProvider, NSString, PRPersonaStore;
@protocol CNScheduler, CNUIPRLikenessProviderCache;

@interface _CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver>
{
    long long _prohibitedSources;
    CNContactStore *_contactStore;
    PRPersonaStore *_personaStore;
    id <CNUIPRLikenessProviderCache> _likenessProviderCache;
    id <CNScheduler> _scheduler;
    CNUIPRPersonaStoreObservableProvider *_personaStoreProvider;
    CNUIMeContactMonitor *_meMonitor;
}

+ (id)monogramObservableForContactFuture:(id)arg1;
+ (id)photoObservableWithPhotoFuture:(id)arg1;
+ (id)contactFuture:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3;
+ (id)observableFromLikenessProviderBlock:(CDUnknownBlockType)arg1 withScheduler:(id)arg2;
+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) CNUIPRPersonaStoreObservableProvider *personaStoreProvider; // @synthesize personaStoreProvider=_personaStoreProvider;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain) id <CNUIPRLikenessProviderCache> likenessProviderCache; // @synthesize likenessProviderCache=_likenessProviderCache;
@property(readonly, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) long long prohibitedSources; // @synthesize prohibitedSources=_prohibitedSources;
- (void).cxx_destruct;
- (id)photoFutureForContactFuture:(id)arg1 photoFuture:(id)arg2 allowingFallbackForMeCard:(_Bool)arg3;
- (id)photoFutureForContactFuture:(id)arg1;
- (_Bool)isMeContact:(id)arg1;
- (id)likenessesForContact:(id)arg1;
- (id)resolveLikenessesForContacts:(id)arg1 withContentHandler:(CDUnknownBlockType)arg2;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3 meMonitor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
