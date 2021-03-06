//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/NSCopying-Protocol.h>

@class LSApplicationProxy, LSApplicationWorkspace, NSString, UIImage;

@interface CKAppInstallation : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    LSApplicationProxy *_proxy;
    UIImage *_icon;
    double _percentComplete;
    LSApplicationWorkspace *__applicationWorkspace;
}

@property(readonly) LSApplicationWorkspace *_applicationWorkspace; // @synthesize _applicationWorkspace=__applicationWorkspace;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, nonatomic) _Bool installed;
@property(retain, nonatomic) LSApplicationProxy *proxy;
@property(readonly, nonatomic) NSString *localizedDisplayName;
@property(readonly, nonatomic) NSString *pluginBundleIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;

@end

