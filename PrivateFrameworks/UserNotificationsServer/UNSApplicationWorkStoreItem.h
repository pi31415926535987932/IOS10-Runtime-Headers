//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface UNSApplicationWorkStoreItem : NSObject
{
    NSString *_key;
    CDUnknownBlockType _workBlock;
    NSDate *_expiryDate;
}

@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, copy, nonatomic) CDUnknownBlockType workBlock; // @synthesize workBlock=_workBlock;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 workBlock:(CDUnknownBlockType)arg2 expiryDate:(id)arg3;

@end
