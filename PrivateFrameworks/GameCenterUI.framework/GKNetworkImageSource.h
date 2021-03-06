/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKNetworkImageSource : GKImageSource {
    NSMutableDictionary * _loadingGroups;
}

@property (nonatomic, retain) NSMutableDictionary *loadingGroups;

- (void)dealloc;
- (bool)imageNeedsRefresh:(id)arg1;
- (void)loadImageForURLString:(id)arg1 loader:(id /* block */)arg2 reference:(id)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (id)loadingGroups;
- (void)setLoadingGroups:(id)arg1;

@end
