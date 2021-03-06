//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMExposureResult : NSObject
{
    _Bool _adjustingExposure;
    _Bool _exposureDidStart;
    _Bool _exposureDidEnd;
    _Bool _deviceSupportsFocus;
    float _exposureTargetBias;
    long long _exposureMode;
    struct CGPoint _pointOfInterest;
}

@property(readonly, nonatomic) _Bool deviceSupportsFocus; // @synthesize deviceSupportsFocus=_deviceSupportsFocus;
@property(readonly, nonatomic) _Bool exposureDidEnd; // @synthesize exposureDidEnd=_exposureDidEnd;
@property(readonly, nonatomic) _Bool exposureDidStart; // @synthesize exposureDidStart=_exposureDidStart;
@property(readonly, nonatomic) float exposureTargetBias; // @synthesize exposureTargetBias=_exposureTargetBias;
@property(readonly, nonatomic) long long exposureMode; // @synthesize exposureMode=_exposureMode;
@property(readonly, nonatomic) struct CGPoint pointOfInterest; // @synthesize pointOfInterest=_pointOfInterest;
@property(readonly, nonatomic, getter=isAdjustingExposure) _Bool adjustingExposure; // @synthesize adjustingExposure=_adjustingExposure;
- (id)description;
- (id)initWithMode:(long long)arg1 pointOfInterest:(struct CGPoint)arg2 exposureTargetBias:(float)arg3 adjusting:(_Bool)arg4 exposureDidStart:(_Bool)arg5 exposureDidEnd:(_Bool)arg6 deviceSupportsFocus:(_Bool)arg7;

@end

