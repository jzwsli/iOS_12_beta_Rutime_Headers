/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBContextLayerHostView : FBSceneLayerHostView

@property (nonatomic) unsigned long long renderingMode;

+ (Class)layerClass;

- (id)initWithSceneLayer:(id)arg1;
- (id)layer;
- (unsigned long long)renderingMode;
- (void)setRenderingMode:(unsigned long long)arg1;

@end
