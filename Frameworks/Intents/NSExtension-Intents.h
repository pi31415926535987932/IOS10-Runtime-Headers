//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtension.h>

@interface NSExtension (Intents)
+ (_Bool)appAllowedToTalkToSiri:(id)arg1;
+ (void)_findAppsWithAnyIntentsExtensionCheckingSiriEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_findSiriEnabledAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;
+ (void)_intents_findAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;
+ (id)_extensionMatchingDictionaryForIntentClassNames:(id)arg1 extensionPointName:(id)arg2 launchId:(id)arg3;
+ (id)_intents_uiExtensionMatchingAttributesForIntents:(id)arg1;
+ (id)_intents_extensionMatchingAttributesForIntents:(id)arg1;
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_intents_matchSiriUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchSiriExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end
