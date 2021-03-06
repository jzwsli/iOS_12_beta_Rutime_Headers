/* made by EzioChiu.
 */

@protocol FBUISceneHostProxy <NSObject, BSDescriptionProviding>

@required

- (void)didInvalidateSceneClient:(id <FBUISceneClientProxy>)arg1;
- (void)sceneClient:(id <FBUISceneClientProxy>)arg1 didAttachLayer:(FBSSceneLayer *)arg2;
- (void)sceneClient:(id <FBUISceneClientProxy>)arg1 didDetachLayer:(FBSSceneLayer *)arg2;
- (void)sceneClient:(id <FBUISceneClientProxy>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)sceneClient:(id <FBUISceneClientProxy>)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)sceneClient:(id <FBUISceneClientProxy>)arg1 didUpdateLayer:(FBSSceneLayer *)arg2;
- (NSString *)sceneIdentifier;
- (FBSSceneSpecification *)sceneSpecification;

@end
