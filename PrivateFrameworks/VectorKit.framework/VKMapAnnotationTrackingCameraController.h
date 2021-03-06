/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController

- (void)_goToAnnotationAnimated:(bool)arg1 duration:(double)arg2 isInitial:(bool)arg3;
- (double)_minTrackingCameraDistance;
- (void)_rotateToHeadingAnimated:(bool)arg1 duration:(double)arg2;
- (double)_zoomLevelForCameraPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end
