/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFloatingCommentRep : TSWPShapeRep

- (id)documentRoot;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)forcesPlacementOnTop;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)modelIsReadOnly;
- (bool)p_shouldDraw;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { }*)arg1;

@end
