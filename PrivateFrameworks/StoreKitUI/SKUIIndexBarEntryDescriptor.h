//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, SKUIArtwork, UIImage;

@interface SKUIIndexBarEntryDescriptor : NSObject
{
    long long _entryDescriptorType;
    SKUIArtwork *_artwork;
    NSAttributedString *_attributedString;
    UIImage *_image;
    long long _visibilityPriority;
    struct CGSize _size;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (id)placeholderEntryDescriptorWithSize:(struct CGSize)arg1;
+ (id)entryDescriptorWithImage:(id)arg1;
+ (id)entryDescriptorWithAttributedString:(id)arg1;
+ (id)entryDescriptorWithArtwork:(id)arg1;
@property(nonatomic) long long visibilityPriority; // @synthesize visibilityPriority=_visibilityPriority;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) SKUIArtwork *artwork; // @synthesize artwork=_artwork;
@property(nonatomic) long long entryDescriptorType; // @synthesize entryDescriptorType=_entryDescriptorType;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
