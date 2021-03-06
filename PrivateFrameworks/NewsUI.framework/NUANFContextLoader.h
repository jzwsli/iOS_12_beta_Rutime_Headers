/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFContextLoader : NSObject <SXResourceDataSource> {
    NUANFAssetLoader * _assetLoader;
    FCAsyncOnceOperation * _asyncOnceOperation;
    SXContext * _context;
    FCFlintManifest * _flintManifest;
    FCFlintResourceManager * _flintResourceManager;
    <SXHost> * _host;
}

@property (nonatomic, retain) NUANFAssetLoader *assetLoader;
@property (nonatomic, retain) FCAsyncOnceOperation *asyncOnceOperation;
@property (nonatomic, retain) SXContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FCFlintManifest *flintManifest;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHost> *host;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetLoader;
- (id)asyncLoadContextOnceWithCompletion:(id /* block */)arg1;
- (id)asyncOnceOperation;
- (id)context;
- (void)fileURLForURL:(id)arg1 onCompletion:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id)flintManifest;
- (id)flintResourceManager;
- (id)host;
- (id)initWithFlintManifest:(id)arg1 flintResourceManager:(id)arg2 andHost:(id)arg3;
- (id)loadContextWithCompletion:(id /* block */)arg1;
- (id /* block */)loadImagesForImageRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setAssetLoader:(id)arg1;
- (void)setAsyncOnceOperation:(id)arg1;
- (void)setContext:(id)arg1;

@end
