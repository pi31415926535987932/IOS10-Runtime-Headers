//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface TKDataSource : NSObject
{
    NSData *_data;
    const char *_ptr;
}

@property(readonly) const char *ptr; // @synthesize ptr=_ptr;
- (void).cxx_destruct;
@property(readonly) NSData *data;
- (id)fetchDataWithLength:(long long)arg1;
- (unsigned char)fetchByte;
- (_Bool)bytesSafeToRead:(long long)arg1;
@property(readonly) const char *end;
- (id)initWithData:(id)arg1;

@end

