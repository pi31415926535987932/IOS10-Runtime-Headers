//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoEditSupport/BLPixelImageBuffer.h>

@interface BLCVPixelImageBuffer : BLPixelImageBuffer
{
    struct __CVBuffer *_pixelBuffer;
    struct CGContext *_cgcontext;
}

- (struct CGContext *)cgcontext;
- (struct __CVBuffer *)pixelBuffer;
- (void)accessPixelsByContextInBlock:(CDUnknownBlockType)arg1;
- (void)accessPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)readPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)renderCIImage:(id)arg1;
- (id)ciImage;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 colorManagement:(int)arg2;

@end

