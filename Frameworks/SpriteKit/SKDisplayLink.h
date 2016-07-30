//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplay, CADisplayLink, NSTimer;

__attribute__((visibility("hidden")))
@interface SKDisplayLink : NSObject
{
    NSTimer *_timer;
    id _client;
    CADisplayLink *_caDisplayLink;
    CADisplay *_display;
    _Bool _paused;
    double _previousFrameTime;
    float _preferredFramesPerSecond;
    CDUnknownBlockType _block;
    float _averageFrameTime;
    long long _frameCount;
    double _frameCountBeginTime;
}

+ (id)displayLinkWithDisplay:(id)arg1 handler:(CDUnknownBlockType)arg2 client:(id)arg3;
- (void).cxx_destruct;
- (void)_caDisplayLinkCallback;
- (void)dealloc;
- (void)_callbackForNextFrame:(double)arg1;
- (void)invalidate;
- (void)_teardown;
- (void)_setup;
@property(retain, nonatomic) CADisplay *display;
@property(nonatomic) long long preferredFramesPerSecond;
@property(nonatomic, getter=isPaused) _Bool paused;
- (id)init;
- (id)initWithDisplay:(id)arg1 handler:(CDUnknownBlockType)arg2 client:(id)arg3;

@end
