//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMPanoramaCaptureRequest;
@protocol CAMPanoramaProcessorDelegate;

@interface CAMPanoramaProcessor : NSObject
{
    _Bool _capturingPanorama;
    id <CAMPanoramaProcessorDelegate> _delegate;
    CAMPanoramaCaptureRequest *_request;
    long long _direction;
    struct CGSize _previewSize;
}

@property(nonatomic, getter=isCapturingPanorama, setter=_setCapturingPanorama:) _Bool capturingPanorama; // @synthesize capturingPanorama=_capturingPanorama;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(retain, nonatomic, setter=_setRequest:) CAMPanoramaCaptureRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) __weak id <CAMPanoramaProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)processPanoramaCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopPanoramaCapture;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
