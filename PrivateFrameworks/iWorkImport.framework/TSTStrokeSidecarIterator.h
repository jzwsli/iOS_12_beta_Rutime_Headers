/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeSidecarIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating> {
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  _curCellID;
    TSTCellRegion * _region;
    struct NSObject { Class x1; } * _regionIterator;
    TSTStrokeSidecar * _strokeSidecar;
}

@property (nonatomic) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } curCellID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSTCellRegion *region;
@property (nonatomic, readonly) NSObject<TSTCellRegionIterating> *regionIterator;
@property (nonatomic, readonly) TSTStrokeSidecar *strokeSidecar;
@property (readonly) Class superclass;

+ (id)p_filterRegion:(id)arg1 strokeSidecar:(id)arg2;

- (void).cxx_destruct;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })advanceToCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })curCellID;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })getNext;
- (id)initWithStrokeSidecar:(id)arg1 region:(id)arg2;
- (id)region;
- (struct NSObject { Class x1; }*)regionIterator;
- (void)setCurCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)strokeSidecar;
- (void)terminate;
- (void)updateCellData:(id)arg1;

@end
