/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularDataOptionsController : PSListController {
    NSMutableArray * _ratSpecifiers;
}

- (void).cxx_destruct;
- (id)controllerForSpecifier:(id)arg1;
- (id)getCDMARoamingStatus:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getEUInternetStatus:(id)arg1;
- (id)init;
- (void)roamingOptionsDidChange;
- (id)roamingSettingsDescription:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetCancelled:(id)arg1;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabledConfirmed:(id)arg1;
- (id)specifiers;
- (void)viewDidAppear:(bool)arg1;

@end
