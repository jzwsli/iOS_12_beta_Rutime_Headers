/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPieChartRep : TSCHChartRep {
    bool  mHasDrawnSinceWedgeKnobTrackerCreated;
    TSCHChartRadialElementsRenderer * mPieElementRenderer;
    NSDictionary * mSeriesIndexedPieWedgeDraggingLayers;
    NSArray * mWedgeKnobs;
}

- (void).cxx_destruct;
- (void)clearRenderers;
- (void)dealloc;
- (double)dragTravelAlongBisectorBetweenStartPoint:(struct CGPoint { double x1; double x2; })arg1 andEndingPoint:(struct CGPoint { double x1; double x2; })arg2 forSeries:(unsigned long long)arg3;
- (bool)forceRenderBlankBackground;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (double)p_radius;
- (id)pieElementRenderer;
- (void)renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
