/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateBarCell_SecondaryCandidate : UIKeyboardCandidateBarCell

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cacheInsets;
+ (id)font;
+ (bool)highlightAffectsBackground;
+ (id)reuseIdentifier;

- (void)_attachLine:(id)arg1 toEdge:(unsigned long long)arg2;
- (void)_setShowsLinesOnEdges:(unsigned long long)arg1 color:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)labelOffset;
- (int)style;
- (void)updateLabels;

@end
