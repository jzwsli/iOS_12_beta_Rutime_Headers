/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPLayoutArea : CPRegion {
    bool  isFirstLayout;
}

- (void)accept:(id)arg1;
- (void)addColumnBreaks;
- (id)description;
- (id)init;
- (bool)isBoxRegion;
- (bool)isFirstLayout;
- (bool)isGraphicalRegion;
- (bool)isImageRegion;
- (bool)isRowRegion;
- (bool)isShapeRegion;
- (bool)isSimilarTo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutAreaBounds;
- (id)properties;
- (double)selectionBottom;
- (void)setIsFirstLayout:(bool)arg1;
- (void)setIsImageRegion:(bool)arg1;

@end
