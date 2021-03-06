/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController> {
    bool  _cancellationAllowed;
    <VSLoadingViewControllerDelegate> * _delegate;
    UIActivityIndicatorView * _loadingIndicator;
}

@property (getter=isCancellationAllowed, nonatomic) bool cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSLoadingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (id)delegate;
- (bool)isCancellationAllowed;
- (id)loadingIndicator;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingIndicator:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
