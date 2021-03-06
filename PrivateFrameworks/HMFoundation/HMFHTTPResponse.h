//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSMutableCopying-Protocol.h>

@class HMFHTTPRequest, HMFHTTPResponseInternal, NSData, NSDictionary;

@interface HMFHTTPResponse : NSObject <NSCopying, NSMutableCopying>
{
    HMFHTTPResponseInternal *_internal;
    HMFHTTPRequest *_request;
}

+ (id)shortDescription;
@property(readonly, nonatomic) HMFHTTPResponseInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) HMFHTTPRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *body;
@property(readonly, nonatomic) NSDictionary *headerFields;
@property(readonly, nonatomic) long long statusCode;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithRequest:(id)arg1 internalResponse:(id)arg2;
- (id)init;

@end

