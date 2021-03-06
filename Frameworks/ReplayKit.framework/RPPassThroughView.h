/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPPassThroughView : UIView {
    UIView * _hitableView;
}

@property (nonatomic, retain) UIView *hitableView;

- (void).cxx_destruct;
- (void)addSubview:(id)arg1;
- (id)hitableView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHitableView:(id)arg1;

@end
