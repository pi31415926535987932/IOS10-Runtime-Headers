//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSSet, TSDCanvas, TSDRep, TSKDocumentRoot;

@protocol TSDCanvasDelegate <NSObject>
- (TSKDocumentRoot *)documentRoot;

@optional
- (_Bool)imageIsRenderingForMovie;
- (_Bool)isRenderingForKPF;
- (_Bool)supportsAdaptiveLayout;
- (_Bool)isCanvasDrawingIntoPDF:(TSDCanvas *)arg1;
- (_Bool)shouldShowInstructionalText;
- (_Bool)shouldShowTextOverflowGlyphs;
- (_Bool)shouldSuppressBackgrounds;
- (_Bool)spellCheckingSuppressed;
- (_Bool)spellCheckingSupported;
- (_Bool)isPrintingCanvas;
- (_Bool)wantsEditingLayoutsForOffscreenInfos;
- (_Bool)isCanvasInteractive;
- (void)canvas:(TSDCanvas *)arg1 createdRep:(TSDRep *)arg2;
- (NSSet *)infosToHideForCanvas:(TSDCanvas *)arg1;
- (NSSet *)additionalVisibleInfosForCanvas:(TSDCanvas *)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(TSDCanvas *)arg1;
- (void)canvasDidUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (void)canvasDidUpdateVisibleBounds:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(TSDCanvas *)arg1;
- (void)canvasDidLayout:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayouts:(TSDCanvas *)arg1;
- (void)canvasWillLayout:(TSDCanvas *)arg1;
- (void)canvasLayoutInvalidated:(TSDCanvas *)arg1;
- (Class)canvasRootLayoutClass;
@end

