//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStore/SSAuthenticateRequestDelegate-Protocol.h>

@class NSNumber, NSString, SSAuthenticationContext, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate>
{
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
}

- (void)_setAuthenticatedDSID:(id)arg1;
- (void)_handleAuthenticateResponse:(id)arg1;
- (id)_authenticatedDSID;
- (id)uniqueKey;
- (void)run;
- (id)authenticatedAccountDSID;
@property(readonly) SSAuthenticationContext *authenticationContext;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

