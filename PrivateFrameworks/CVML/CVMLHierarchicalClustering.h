//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/CVMLClustering-Protocol.h>

@interface CVMLHierarchicalClustering : NSObject <CVMLClustering>
{
    struct shared_ptr<vision::mod::ClusteringAbstract> m_ClusteringImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)getClustersWithOptions:(id)arg1 cancellationSemaphore:(id)arg2 error:(id *)arg3;
- (_Bool)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 cancellationSemaphore:(id)arg3 error:(id *)arg4;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
