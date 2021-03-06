/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentExposureMonitor : NSObject <SXViewportChangeListener> {
    NSMutableSet * _trackingComponents;
    SXViewport * _viewport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *trackingComponents;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (id)initWithViewport:(id)arg1;
- (void)onExposureOf:(id)arg1 exposureStateChangeBlock:(id /* block */)arg2;
- (void)performMonitoring;
- (void)setTrackingComponents:(id)arg1;
- (void)trackExposureForTracking:(id)arg1;
- (id)trackingComponents;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
