//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SGSqlEntityStore;

@interface SGServiceContext : NSObject
{
    SGSqlEntityStore *_store;
}

@property(readonly, nonatomic) SGSqlEntityStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)initWithStore:(id)arg1;
- (id)init;

@end
