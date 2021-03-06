/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetDownloadRequest : NSObject {
    int  _currentRequestId;
    <PLAssetDownloadRequestDelegate> * _delegate;
    NSMutableDictionary * _progressById;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requestsById;
}

@property (nonatomic) <PLAssetDownloadRequestDelegate> *delegate;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_onQueueAsync:(id /* block */)arg1;
- (void)cancelRequest:(int)arg1;
- (id)delegate;
- (id)init;
- (int)requestRequiredResourcesForManagedAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
