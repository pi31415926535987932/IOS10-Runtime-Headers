//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/NSCopying-Protocol.h>

@class NSBundle, NSString, UIColor;

@interface MusicBundleImageArtworkRequest : NSObject <NSCopying>
{
    NSBundle *_bundle;
    NSString *_imageName;
    long long _renderingMode;
    UIColor *_tintColor;
}

@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long renderingMode; // @synthesize renderingMode=_renderingMode;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithImageName:(id)arg1 inBundle:(id)arg2;

@end
