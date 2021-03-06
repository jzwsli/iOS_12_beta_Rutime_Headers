/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface DCSinglePixelLineView : UIView {
    bool  _hasSetUpSizeConstraint;
}

@property (nonatomic) bool hasSetUpSizeConstraint;

- (id)addSizeConstraint;
- (id)findSizeLayoutConstraintIfExists;
- (bool)hasSetUpSizeConstraint;
- (void)setHasSetUpSizeConstraint:(bool)arg1;
- (void)setUpHeightConstraintIfNecessary;
- (void)updateConstraints;

@end
