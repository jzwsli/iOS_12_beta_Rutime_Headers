/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreCuratorPlaylistsRequestOperation : MPStoreModelRequestOperation {
    unsigned long long  _requestType;
}

- (void)_produceIncrementalResponseWithLoadedItemMetadataResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_produceInitialResponseWithLoadedItemMetadataResponse:(id)arg1 completion:(id /* block */)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;

@end
