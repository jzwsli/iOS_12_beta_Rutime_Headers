/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIStatusBarStyleSnapshot : NSObject <NSCopying> {
    UIStatusBarStyleRequest * _activeStyleRequest;
    bool  _hidden;
}

@property (nonatomic, readonly, copy) UIStatusBarStyleRequest *activeStyleRequest;
@property (getter=isHidden, nonatomic, readonly) bool hidden;

- (void).cxx_destruct;
- (id)activeStyleRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithHidden:(bool)arg1 activeStyleRequest:(id)arg2;
- (bool)isHidden;

@end
