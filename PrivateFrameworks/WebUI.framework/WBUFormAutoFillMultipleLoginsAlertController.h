/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillMultipleLoginsAlertController : UIAlertController {
    id  _appDidEnterBackgroundObserver;
    UIAlertAction * _cancelAction;
    bool  _cancelsWhenAppEntersBackground;
}

@property (nonatomic) bool cancelsWhenAppEntersBackground;

+ (id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 externalCredentials:(id)arg3 preferredStyle:(long long)arg4 formURL:(id)arg5 completionHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (bool)cancelsWhenAppEntersBackground;
- (void)setCancelsWhenAppEntersBackground:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
