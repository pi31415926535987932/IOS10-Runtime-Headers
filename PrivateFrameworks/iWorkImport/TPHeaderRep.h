//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPHeaderRep.h>

@class TPPaginatedPageInfo;

__attribute__((visibility("hidden")))
@interface TPHeaderRep : TSWPHeaderRep
{
    _Bool _hideKnobs;
}

@property(nonatomic) _Bool hideKnobs; // @synthesize hideKnobs=_hideKnobs;
- (_Bool)p_isMiddleFooterRep;
- (_Bool)p_isMiddleHeaderRep;
- (_Bool)p_shouldCreateArrowKnobs;
- (_Bool)p_isInDocumentSetup;
- (_Bool)shouldIgnoreSingleTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
@property(readonly, nonatomic) TPPaginatedPageInfo *pageInfo;
- (id)pageLayout;

@end

