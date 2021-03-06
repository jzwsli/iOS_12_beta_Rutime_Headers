/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKViewVolume : NSObject {
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _corners;
}

@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *corners; /* unknown property attribute:  1>=[3d]} */

- (id).cxx_construct;
- (const struct Matrix<double, 3, 1> { double x1[3]; }*)corners;
- (struct Matrix<double, 3, 1> { double x1[3]; })lerpPoint:(float*)arg1;
- (void)updateWithFrustum:(struct { bool x1; double x2; double x3; double x4; double x5; double x6; })arg1 matrix:(const struct Matrix<double, 4, 4> { double x1[16]; }*)arg2;

@end
