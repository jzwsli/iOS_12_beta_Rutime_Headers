/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPRemoteUILocalSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {
    bool  _finished;
    bool  _inlineMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)init;
- (id)pinInstructionsPrompt;
- (id)title;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
