/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputViewAnimationStyleExtraView : NSObject {
    int  _alignment;
    id /* block */  _animation;
    int  _clipContainerType;
    UIView * _view;
}

@property (nonatomic) int alignment;
@property (nonatomic, copy) id /* block */ animation;
@property (nonatomic) int clipContainerType;
@property (nonatomic, retain) UIView *view;

+ (id)extraView:(id)arg1 withAlignment:(int)arg2 animation:(id /* block */)arg3 onSnapshot:(bool)arg4;

- (int)alignment;
- (id /* block */)animation;
- (int)clipContainerType;
- (void)dealloc;
- (void)setAlignment:(int)arg1;
- (void)setAnimation:(id /* block */)arg1;
- (void)setClipContainerType:(int)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
