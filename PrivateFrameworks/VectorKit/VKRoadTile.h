//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKVectorTile.h>

@class VKTrafficTile;

__attribute__((visibility("hidden")))
@interface VKRoadTile : VKVectorTile
{
    VKTrafficTile *_trafficTile;
    struct unique_ptr<md::RoadLayer, std::__1::default_delete<md::RoadLayer>> _roadLayer;
    struct unique_ptr<md::RoadLayer, std::__1::default_delete<md::RoadLayer>> _roadTrafficLayer;
    struct unique_ptr<md::PatternedLayer, std::__1::default_delete<md::PatternedLayer>> _patternedRibbonLayer;
}

@property(retain, nonatomic) VKTrafficTile *trafficTile; // @synthesize trafficTile=_trafficTile;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct PatternedLayer *patternedRibbonLayer;
@property(readonly, nonatomic) struct RoadLayer *roadTrafficLayer;
@property(readonly, nonatomic) struct RoadLayer *roadLayer;
- (void)buildGglMeshesWithDevice:(Device_f0710f89 *)arg1 trafficStream:(const struct TrafficStream *)arg2;
- (void)addPatternedRibbonTo:(unordered_map_9bc2a073 *)arg1 styleQuery:(shared_ptr_c5d816ee)arg2 painterZ:(unsigned int)arg3 numPoints:(unsigned long long)arg4 points:(Matrix_8746f91e *)arg5;
- (void)addRoadRibbonTo:(unordered_map_27c13d85 *)arg1 styleQuery:(shared_ptr_c5d816ee)arg2 painterZ:(unsigned int)arg3 numPoints:(unsigned long long)arg4 points:(Matrix_8746f91e *)arg5 startCap:(_Bool)arg6 endCap:(_Bool)arg7 trafficStream:(const struct TrafficStream *)arg8 trafficTexelRun:(const struct TexelRun *)arg9 trafficSkeleton:(_Bool)arg10;
- (void)updateViewDependentStateIfNecessaryWithContext:(struct LayoutContext *)arg1;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 styleManager:(shared_ptr_a3c46825)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 device:(Device_f0710f89 *)arg6;

@end
