//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation;

@interface VSAccountManagerResult : NSObject
{
    NSOperation *_operation;
}

@property(retain, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOperation:(id)arg1;
- (id)init;

@end
