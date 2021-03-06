/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIWebRestrictionsController : PSEditableListController <MCProfileConnectionObserver> {
    NSMutableArray * _allowedGroup;
    NSArray * _contentFilterOverriddenBlackListedSites;
    NSArray * _contentFilterOverriddenWhiteListedSites;
    NSMutableArray * _deniedGroup;
    NSMutableArray * _inAndOutList;
    int  _restrictionState;
    bool  _webFilterEditingAllowedByProfile;
    NSArray * _whiteListAllowedSites;
    NSMutableArray * _whitelist;
    NSMutableArray * _whitelistAllowedGroup;
}

@property (nonatomic, retain) NSMutableArray *allowedGroup;
@property (nonatomic, retain) NSArray *contentFilterOverriddenBlackListedSites;
@property (nonatomic, retain) NSArray *contentFilterOverriddenWhiteListedSites;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *deniedGroup;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *inAndOutList;
@property (nonatomic) int restrictionState;
@property (readonly) Class superclass;
@property (nonatomic) bool webFilterEditingAllowedByProfile;
@property (nonatomic, retain) NSArray *whiteListAllowedSites;
@property (nonatomic, retain) NSMutableArray *whitelist;
@property (nonatomic, retain) NSMutableArray *whitelistAllowedGroup;

+ (int)webRestrictionsState;

- (void).cxx_destruct;
- (id)_whitelistBookmarkForURL:(id)arg1;
- (id)allowedGroup;
- (void)commitNamedURL:(id)arg1;
- (id)contentFilterOverriddenBlackListedSites;
- (id)contentFilterOverriddenWhiteListedSites;
- (id)controlledURL:(id)arg1;
- (void)dealloc;
- (id)deniedGroup;
- (id)inAndOutList;
- (id)inAndOutListItems;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)reloadEntriesFromManagedConfiguration;
- (int)restrictionState;
- (void)saveContentFilterOverriddenBlackListedSites:(id)arg1;
- (void)saveContentFilterOverriddenWhiteListedSites:(id)arg1;
- (void)saveWhiteListAllowedSites:(id)arg1;
- (void)setAllowedGroup:(id)arg1;
- (void)setContentFilterOverriddenBlackListedSites:(id)arg1;
- (void)setContentFilterOverriddenWhiteListedSites:(id)arg1;
- (void)setControlledURL:(id)arg1 specifier:(id)arg2;
- (void)setDeniedGroup:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setInAndOutList:(id)arg1;
- (void)setRestrictionState:(int)arg1;
- (void)setRestrictionType:(id)arg1 specifier:(id)arg2;
- (void)setWebFilterEditingAllowedByProfile:(bool)arg1;
- (void)setWhiteListAllowedSites:(id)arg1;
- (void)setWhitelist:(id)arg1;
- (void)setWhitelistAllowedGroup:(id)arg1;
- (id)specifiers;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)updateEditControlWithState:(int)arg1 animated:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (bool)webFilterEditingAllowedByProfile;
- (void)webFilterStateChanged:(id)arg1;
- (id)whiteListAllowedSites;
- (id)whitelist;
- (id)whitelistAllowedGroup;
- (id)whitelistItems;

@end
