//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SLFacebookFriendList : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_type;
}

+ (id)friendListsWithResponseData:(id)arg1;
+ (id)friendListWithDictionary:(id)arg1;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithFriendListDictionary:(id)arg1;

@end
