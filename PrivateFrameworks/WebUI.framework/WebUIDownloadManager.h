/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WebUIDownloadManager : NSObject <WebDownloadDelegate> {
    id  _delegate;
    NSURLDownload * _download;
    NSString * _downloadPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_downloadDidFail:(id)arg1;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidBegin:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
