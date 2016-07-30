//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DShaderEffect.h>

@class NSArray, TSCH3DTexturePool;

__attribute__((visibility("hidden")))
@interface TSCH3DSphericalEnvironmentShaderEffect : TSCH3DShaderEffect
{
    NSArray *mMaterials;
    TSCH3DTexturePool *mPool;
}

+ (id)effectWithMaterials:(id)arg1 pool:(id)arg2;
+ (Class)stateClass;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)inject:(id)arg1;
- (void)addVariables:(id)arg1;
- (const array_bb63b711 *)textureVariablesArray;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithMaterials:(id)arg1 pool:(id)arg2;

@end
