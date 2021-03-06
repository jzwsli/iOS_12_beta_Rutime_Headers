/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCurrentRecordingRemoteViewController : _UIRemoteViewController <RCUIClientCurrentRecordingViewController> {
    <RCCurrentRecordingViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RCCurrentRecordingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (void)currentRecordingAVStateDidChange:(id)arg1;
- (void)currentRecordingDidEnd;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
