/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUILTEOptionsController : PSListItemsController <UIAlertViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isOnCallOfSubType:(struct __CFString { }*)arg1;
+ (bool)isProvisioning:(id)arg1;
+ (bool)isVoiceEnabled:(id)arg1;
+ (void)setVoice:(id)arg1 enabled:(bool)arg2;
+ (bool)shouldShowVoiceOptions:(id)arg1;
+ (unsigned long long)voiceAvailability:(id)arg1;

- (void)dealloc;
- (id)init;
- (void)listItemSelected:(id)arg1;
- (void)presentCallCarrierAlert;
- (bool)presentOnCallAlertIfNeededForService:(unsigned long long)arg1 okayCompletion:(id /* block */)arg2;
- (id)specifiers;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateProvisioning;

@end
