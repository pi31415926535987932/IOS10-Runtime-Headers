//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface WKApplicationProxy : NSObject
{
    NSURL *_bundleURL;
}

+ (id)gizmoAppBundleUrlWithPluginUrl:(id)arg1;
+ (id)watchAppBundleUrlWithContainerUrl:(id)arg1;
+ (id)applicationsForContainerProxy:(id)arg1;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
- (void).cxx_destruct;
- (id)initWithBundleURL:(id)arg1;

@end

