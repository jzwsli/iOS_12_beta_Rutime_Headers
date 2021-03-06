/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCDownloadCircleView : UIView {
    double  _endAngle;
    double  _lineWidth;
    double  _startAngle;
}

@property (nonatomic) double endAngle;
@property (nonatomic) double lineWidth;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;
@property (nonatomic) double startAngle;

+ (Class)layerClass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (double)endAngle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)lineWidth;
- (void)setEndAngle:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStartAngle:(double)arg1;
- (void)setupCircleView;
- (id)shapeLayer;
- (double)startAngle;
- (void)tintColorDidChange;
- (void)updateShapeLayer;

@end
