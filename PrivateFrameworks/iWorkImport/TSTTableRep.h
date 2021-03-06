//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPTextHostRep.h>

#import <iWorkImport/UITextFieldDelegate-Protocol.h>

@class CALayer, CAShapeLayer, NSMutableArray, NSMutableDictionary, NSSet, NSString, TSDKnobTracker, TSKHighlightArrayController, TSTAnimation, TSTCellSelection, TSTLayout, TSTMasterLayout, TSTSearchReference, TSTSelectionDragController, TSTTableCellTextEditingRep, TSTTableInfo, TSTTableModel, TSTTableReferences, TSWPHyperlinkField, TSWPStorage;
@protocol TSTCanvasReferenceController, TSTTableAnimationController, TSTTableChromeProvider, TSTTableKnobTrackerVisitorProtocol, TSTTableRepDelegate;

__attribute__((visibility("hidden")))
@interface TSTTableRep : TSWPTextHostRep <UITextFieldDelegate>
{
    struct CGRect mCanvasVisibleRect;
    struct CGRect mSearchSelectionBounds;
    double mCurrentScreenScale;
    struct TSUCellRect mDirtyCellRange;
    _Bool mRecursivelyDrawingInContext;
    NSMutableArray *mAnimationStack;
    id <TSTTableAnimationController> mAnimationController;
    TSTTableCellTextEditingRep *mContainedTextEditingRep;
    struct TSUCellCoord mRatingsDragCellID;
    id <TSTTableChromeProvider> mTableChrome;
    TSTTableReferences *mReferences;
    CAShapeLayer *mHighlightedHyperlinkLayer;
    _Bool mIsAspectOperationInProgress;
    _Bool mIsZoomOperationInProgress;
    _Bool mIsZoomToEditOperationInProgress;
    struct TSUCellRect mZoomToEditVisibleCellRange;
    CAShapeLayer *mFindSelectionHighlightLayer;
    CALayer *mTableCollaboratorCursorLayer;
    TSTCellSelection *mSourceFillSelection;
    TSTCellSelection *mTargetFillSelection;
    _Bool mWPEndedTableNameEditing;
    _Bool _settingSelection;
    TSTSelectionDragController *mCellDragController;
    _Bool mSelectionDragAbortedOnNewSelection;
    _Bool mDragByHandleOnly;
    _Bool mSelectionUsesBezierPath;
    _Bool mSelectsCellOnInitialTap;
    _Bool mUsesWholeChromeResizer;
    id <TSTCanvasReferenceController> mCanvasReferenceController;
    id <TSTTableRepDelegate> mDelegate;
    TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *mVisitorKnobTracker;
    NSSet *mVisibleFillKnobs;
    struct TSUCellCoord mEditingHyperlinkCellID;
    TSWPStorage *mHyperlinkParentStorage;
    _Bool mHyperlinkModified;
    _Bool mInspectingHyperlinkInEditingStorage;
    TSWPHyperlinkField *mHyperlinkField;
    CAShapeLayer *mCellEditingMaskLayer;
    TSKHighlightArrayController *mBodyHighlightArrayController;
    TSKHighlightArrayController *mFrozenCornerHighlightArrayController;
    TSKHighlightArrayController *mFrozenColumnsHighlightArrayController;
    TSKHighlightArrayController *mFrozenRowsHighlightArrayController;
    TSKHighlightArrayController *mBodyPulseArrayController;
    TSKHighlightArrayController *mFrozenCornerPulseArrayController;
    TSKHighlightArrayController *mFrozenColumnsPulseArrayController;
    TSKHighlightArrayController *mFrozenRowsPulseArrayController;
    TSTSearchReference *mPreviousSearchReference;
    _Bool mTableNameValid;
    NSMutableDictionary *mChildTextReps;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (unsigned long long)p_countOfIdenticalCellsBetweenOutgoingTableModel:(id)arg1 incomingTableModel:(id)arg2;
+ (Class)tableRepDelegateClass;
@property(nonatomic, getter=isTableNameValid) _Bool tableNameValid; // @synthesize tableNameValid=mTableNameValid;
@property(retain, nonatomic) NSMutableDictionary *childTextReps; // @synthesize childTextReps=mChildTextReps;
@property(readonly, nonatomic) _Bool isZoomToEditOperationInProgress; // @synthesize isZoomToEditOperationInProgress=mIsZoomToEditOperationInProgress;
@property(nonatomic) struct TSUCellCoord ratingsDragCellID; // @synthesize ratingsDragCellID=mRatingsDragCellID;
@property(nonatomic) TSTSelectionDragController *cellDragController; // @synthesize cellDragController=mCellDragController;
@property(readonly, nonatomic) id <TSTTableRepDelegate> delegate; // @synthesize delegate=mDelegate;
@property(readonly, nonatomic) id <TSTTableChromeProvider> tableChrome; // @synthesize tableChrome=mTableChrome;
@property(nonatomic) id <TSTTableAnimationController> animationController; // @synthesize animationController=mAnimationController;
@property(readonly, nonatomic) id <TSTCanvasReferenceController> canvasReferenceController; // @synthesize canvasReferenceController=mCanvasReferenceController;
@property(readonly, copy) NSString *description;
- (id)p_textImageForPath:(struct CGPath *)arg1 shouldPulsate:(_Bool)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (_Bool)canDrawInParallel;
- (_Bool)mustDrawOnMainThreadForInteractiveCanvas;
- (_Bool)canDrawInBackgroundDuringScroll;
- (void)invalidateFrozenHeaders;
- (void)validateFrozenHeaderTableBodyMask;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)validateFrozenHeaderColumns;
- (void)validateFrozenHeaderRows;
- (void)validateFrozenHeaderCorner;
- (struct CGRect)p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)overlayLayers;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)textureForContext:(id)arg1;
- (void)setTextureStage:(unsigned long long)arg1;
- (void)popAnimation;
- (void)pushAnimation:(id)arg1;
@property(readonly, nonatomic) TSTAnimation *currentAnimation;
- (void)didDrawCellImageFill:(id)arg1 inCellRange:(struct TSUCellRect)arg2;
- (void)updateDynamicModeForEditingSpillText;
- (void)screenScaleDidChange;
- (void)viewScaleDidChange;
- (_Bool)isFullyVisibleWithBorder:(int)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)validateVisibleRect;
- (void)validateStrokesInEditingSpillingTextRange;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (void)updateFromLayout;
- (id)hyperlinkRegions;
- (id)hyperlinkContainerRep;
- (struct CGRect)naturalBoundsRectForHyperlinkField:(id)arg1;
- (struct CGAffineTransform)p_horizontalAlignmentTransformForHyperlinkWithBounds:(struct CGRect)arg1 inCell:(struct TSUCellCoord)arg2;
- (struct TSUCellCoord)p_cellIDForHyperlinkField:(id)arg1;
- (id)p_columnForCellID:(struct TSUCellCoord)arg1;
- (id)editorSelection;
- (void)contentsRectForCellRangeAcrossSpaces:(struct TSUCellRect)arg1 contentsCenterInfo:(CDStruct_7bd98050 *)arg2 canvasFrame:(struct CGRect *)arg3 contentsRect:(struct CGRect *)arg4;
- (struct CGRect)boundsForCellSelection:(struct TSUCellCoord)arg1;
- (struct CGRect)canvasBoundsForCellRange:(struct TSUCellRect)arg1;
- (struct CGRect)deviceBoundsForCellRange:(struct TSUCellRect)arg1;
- (_Bool)isDraggable;
- (_Bool)p_shouldPerformOnChildTextReps:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (id)childReps;
- (void)updateChildrenFromLayout;
- (void)willBeRemoved;
- (void)invalidateEditingCell;
- (void)asyncPostTextChangedInRange:(struct TSUCellRect)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)p_addObservers;
- (void)p_removeObservers;
- (void)dealloc;
- (struct CGRect)layerFrameInScaledCanvas;
- (id)repForDragging;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1;
@property(readonly, nonatomic) long long selectionType;
@property(readonly, nonatomic) TSTCellSelection *selection;
@property(readonly, nonatomic) struct CGRect canvasVisibleRect;
@property(readonly, nonatomic) struct CGAffineTransform transformFromCanvas;
@property(readonly, nonatomic) struct CGAffineTransform transformToCanvas;
@property(readonly, nonatomic) TSTMasterLayout *masterLayout;
@property(readonly, nonatomic) TSTLayout *tableLayout;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

