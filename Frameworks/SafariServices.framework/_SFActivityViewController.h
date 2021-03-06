/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFActivityViewController : UIActivityViewController {
    NSString * _currentExtensionIdentifier;
    <_SFActivityViewControllerDelegate> * _delegate;
    LPMetadataProvider * _pendingMessageMetadataProvider;
    _SFSafariSharingExtensionController * _sharingExtensionController;
    NSURL * _sharingURL;
    bool  _viewCanEarlyDismiss;
}

@property (nonatomic, copy) NSString *currentExtensionIdentifier;
@property (nonatomic) <_SFActivityViewControllerDelegate> *delegate;
@property (nonatomic) _SFSafariSharingExtensionController *sharingExtensionController;
@property (nonatomic, readonly) NSURL *sharingURL;
@property (nonatomic, readonly) bool viewCanEarlyDismiss;

+ (id)activeWebPageExtensionItemForURL:(id)arg1 withPreviewImageHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_executeActivity;
- (id)_extensionItemForExtensionActivity:(id)arg1;
- (id)_javaScriptProcessingFileURLInExtension:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_processJavaScriptFinalizeReturnedItems:(id)arg1 forExtension:(id)arg2;
- (void)activityDidComplete:(id)arg1 withReturnedItems:(id)arg2 success:(bool)arg3;
- (id)currentExtensionIdentifier;
- (id)delegate;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3 sourceURL:(id)arg4;
- (void)prepareJavaScriptExtensionItemForActivity:(id)arg1;
- (void)prepareMessageActivity:(id)arg1 withWebView:(id)arg2 completion:(id /* block */)arg3;
- (void)setCurrentExtensionIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSharingExtensionController:(id)arg1;
- (id)sharingExtensionController;
- (id)sharingURL;
- (bool)viewCanEarlyDismiss;

@end
