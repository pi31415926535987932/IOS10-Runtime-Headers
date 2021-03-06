//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest
{
}

+ (id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startCorrectedSpeechRequest;
@property(copy, nonatomic) NSString *utteranceSource;
@property(copy, nonatomic) NSString *sessionId;
@property(copy, nonatomic) NSString *previousUtterance;
@property(nonatomic) double originalScore;
@property(nonatomic) long long originalRank;
@property(nonatomic) _Bool onDeviceUtterancesPresent;
@property(copy, nonatomic) NSString *interactionId;
@property(nonatomic) double combinedScore;
@property(nonatomic) long long combinedRank;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

