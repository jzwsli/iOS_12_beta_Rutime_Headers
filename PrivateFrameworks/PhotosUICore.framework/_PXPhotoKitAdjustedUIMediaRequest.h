/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXPhotoKitAdjustedUIMediaRequest : NSObject {
    <PXPhotoKitAdjustedDisplayAsset> * _asset;
    PLPhotoEditModel * _baseEditModel;
    bool  _delayRenders;
    PLEditSource * _editSource;
    PXPhotoKitEditSourceLoader * _editSourceLoader;
    NSError * _loadError;
    double  _progress;
    NSObject<OS_dispatch_queue> * _renderQueue;
    bool  _useCachedRenders;
}

@property (nonatomic, readonly) <PXPhotoKitAdjustedDisplayAsset> *asset;
@property (nonatomic, retain) PLPhotoEditModel *baseEditModel;
@property (nonatomic) bool delayRenders;
@property (nonatomic, retain) PLEditSource *editSource;
@property (nonatomic, retain) NSError *loadError;
@property (nonatomic) double progress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *renderQueue;
@property (nonatomic) bool useCachedRenders;

- (void).cxx_destruct;
- (void)_handleEditSourceLoadingFinished;
- (id)asset;
- (id)baseEditModel;
- (void)beginLoadingEditSource;
- (void)cancel;
- (void)dealloc;
- (bool)delayRenders;
- (id)editSource;
- (void)editSourceDidChange;
- (id)initWithAsset:(id)arg1 renderQueue:(id)arg2;
- (id)loadError;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)progress;
- (void)progressDidChange;
- (id)renderQueue;
- (void)setBaseEditModel:(id)arg1;
- (void)setDelayRenders:(bool)arg1;
- (void)setEditSource:(id)arg1;
- (void)setLoadError:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setUseCachedRenders:(bool)arg1;
- (void)start;
- (bool)useCachedRenders;

@end
