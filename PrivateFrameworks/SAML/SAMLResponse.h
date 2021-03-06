//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAML/XMLWrapperDoc.h>

@class NSDictionary, NSString, SAMLResponseElement;

@interface SAMLResponse : XMLWrapperDoc
{
    SAMLResponseElement *_responseElement;
}

@property(retain, nonatomic) SAMLResponseElement *responseElement; // @synthesize responseElement=_responseElement;
- (void).cxx_destruct;
- (id)authorizationStatusForResource:(id)arg1;
- (long long)expectedAction;
- (id)statusCodes;
- (_Bool)isValid:(id *)arg1;
- (_Bool)assertionMeetsConditions:(id *)arg1;
- (id)authenticationSessionId;
- (id)authenticationTTL;
- (_Bool)hasValidAuthentication;
- (id)userName;
- (id)subject;
@property(readonly, nonatomic) NSString *selectedProvider;
- (id)attributeValuesForName:(id)arg1;
@property(readonly, nonatomic) NSDictionary *attributes;
- (id)assertions;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;

@end

