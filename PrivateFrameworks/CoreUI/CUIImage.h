//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

@interface CUIImage : NSObject <NSCopying>
{
    struct CGImage *_cgImage;
}

+ (id)imageWithCGImage:(struct CGImage *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (struct CGImage *)cgImage;
@property(readonly, nonatomic) struct CGImage *image;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1;

@end

