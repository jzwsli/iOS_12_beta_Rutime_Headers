/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUISceneEvent : NSObject {
    id /* block */  _sender;
    bool  _sent;
    FBSSceneTransitionContext * _transitionContext;
}

@property (nonatomic, readonly) FBSSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTransitionContext:(id)arg1 sender:(id /* block */)arg2;
- (void)send;
- (void)sendWithResponseHandler:(id /* block */)arg1;
- (id)transitionContext;

@end
