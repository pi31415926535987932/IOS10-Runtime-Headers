//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLComputePipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor
{
    struct MTLComputePipelineDescriptorPrivate *_private;
}

- (void)validateWithDevice:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (const struct MTLComputePipelineDescriptorPrivate *)_descriptorPrivate;
- (_Bool)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg1;
- (id)computeFunction;
- (void)setComputeFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)reset;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
