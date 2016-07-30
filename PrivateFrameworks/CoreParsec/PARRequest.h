//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PARRequest : NSObject <NSSecureCoding>
{
    _Bool _verboseReply;
    long long _queryId;
    double _scale;
    NSString *_keyboardLocale;
    unsigned long long _triggerEvent;
    NSArray *_queryItems;
}

+ (_Bool)supportsSecureCoding;
+ (id)flightRequestForId:(id)arg1;
+ (id)flightRequestForQuery:(id)arg1 timezone:(id)arg2 dateComponents:(id)arg3;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(long long)arg4 appBundleId:(id)arg5;
+ (id)zeroKeywordRequest;
+ (id)cardRequestWithURL:(id)arg1;
+ (id)moreResultsRequestWithURL:(id)arg1;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned long long)arg2;
+ (id)searchRequestWithString:(id)arg1;
@property(retain, nonatomic) NSArray *queryItems; // @synthesize queryItems=_queryItems;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(nonatomic) _Bool verboseReply; // @synthesize verboseReply=_verboseReply;
@property(retain, nonatomic) NSString *keyboardLocale; // @synthesize keyboardLocale=_keyboardLocale;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) long long queryId; // @synthesize queryId=_queryId;
- (void).cxx_destruct;
- (Class)responseClass;
- (void)setQueryId:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
