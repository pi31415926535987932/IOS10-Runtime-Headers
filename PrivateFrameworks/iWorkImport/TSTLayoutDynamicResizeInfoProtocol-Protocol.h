//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSTCellRegion, TSTMasterLayout;
@protocol TSTLayoutDynamicResizeInfoProtocol;

@protocol TSTLayoutDynamicResizeInfoProtocol <NSObject>
- (double)totalMinimumColumnWidths;
- (double)totalMinimumRowHeights;
- (double)totalCurrentColumnWidths;
- (double)totalCurrentRowHeights;
- (double)totalCapturedColumnWidths;
- (double)totalCapturedRowHeights;
- (void)captureNewMinimumRowHeights:(TSTMasterLayout *)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)getColumnWidthResize:(unsigned char)arg1;
- (double)getRowHeightResize:(unsigned short)arg1;
- (double)getColumnWidth:(unsigned char)arg1;
- (double)getRowHeight:(unsigned short)arg1;
- (double)getColumnInitialWidth:(unsigned char)arg1;
- (double)getRowInitialHeight:(unsigned short)arg1;
- (_Bool)hasWidthForColumn:(unsigned char)arg1;
- (_Bool)hasHeightForRow:(unsigned short)arg1;
- (void)invalidate;
- (_Bool)valid;
- (id)initWithDynamicResizeInfo:(id <TSTLayoutDynamicResizeInfoProtocol>)arg1;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1 rowRegion:(TSTCellRegion *)arg2;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1 columnRegion:(TSTCellRegion *)arg2;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1 columnRegion:(TSTCellRegion *)arg2 rowRegion:(TSTCellRegion *)arg3;
@end

