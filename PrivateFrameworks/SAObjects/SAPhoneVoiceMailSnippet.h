//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber;
@protocol SAClientBoundCommand;

@interface SAPhoneVoiceMailSnippet : SAUISnippet
{
}

+ (id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voiceMailSnippet;
@property(retain, nonatomic) id <SAClientBoundCommand> postPlayCommand;
@property(copy, nonatomic) NSArray *playVoiceMailCommands;
@property(copy, nonatomic) NSArray *calls;
@property(copy, nonatomic) NSNumber *autoPlay;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
