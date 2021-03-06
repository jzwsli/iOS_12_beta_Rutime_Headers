/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNFavoritesEntry : NSObject <CNContactChangesObserver> {
    NSString * _abDatabaseUUID;
    int  _abIdentifier;
    int  _abUid;
    NSString * _actionType;
    bool  _autoUpdating;
    NSString * _bundleIdentifier;
    CNContact * _contact;
    bool  _dirty;
    NSString * _label;
    NSString * _labeledValueIdentifier;
    NSString * _name;
    NSString * _originalName;
    NSString * _propertyKey;
    CNContactStore * _store;
    long long  _type;
    NSString * _value;
}

@property (nonatomic, retain) NSString *abDatabaseUUID;
@property (nonatomic) int abIdentifier;
@property (nonatomic) int abUid;
@property (nonatomic, retain) NSString *actionType;
@property (nonatomic, readonly) bool autoUpdating;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) CNContactProperty *contactProperty;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dirty;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *labeledValueIdentifier;
@property (nonatomic, readonly, copy) NSString *localizedContactPropertyLabel;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSString *originalName;
@property (nonatomic, retain) NSString *propertyKey;
@property (nonatomic, retain) CNContactStore *store;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSString *value;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (void)_runLookupWithStore:(id)arg1;
+ (id)contactFormatter;
+ (id)createLabeledValueForFavoritesEntryValue:(id)arg1 label:(id)arg2 iOSLegacyIdentifier:(int)arg3 propertyKey:(id)arg4;
+ (id)descriptorsForRequiredKeysForPropertyKey:(id)arg1;
+ (id)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2;
+ (bool)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2 isEqualToValue:(id)arg3;
+ (void)initialize;
+ (id)instantMessageAddressForFavoritesEntryValue:(id)arg1;
+ (id)labeledValueValueForFavoritesEntryValue:(id)arg1 propertyKey:(id)arg2;
+ (id)rematchEntrySnapshot:(id)arg1 withStore:(id)arg2 noMatchFound:(bool*)arg3;
+ (id)sharedContactStore;
+ (id)socialProfileForFavoritesEntryValue:(id)arg1;
+ (id)valueStringFromInstantMessageAddress:(id)arg1;
+ (id)valueStringFromSocialProfile:(id)arg1;

- (void).cxx_destruct;
- (void)_convertFromEntryType:(long long)arg1 toActionType:(id*)arg2 bundleIdentifier:(id*)arg3;
- (int)_entryTypeForActionType:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 entryType:(long long)arg4 actionType:(id)arg5 bundleIdentifier:(id)arg6 store:(id)arg7;
- (void)_lookupChanged:(id)arg1;
- (void)_lookupNotFound;
- (void)_postEntryChanged;
- (void)_queueLookup;
- (void)_unqueueLookup;
- (id)abDatabaseUUID;
- (int)abIdentifier;
- (int)abUid;
- (id)actionType;
- (bool)autoUpdating;
- (id)bundleIdentifier;
- (id)contact;
- (void)contactDidChange:(id)arg1;
- (id)contactProperty;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)dictionaryRepresentation:(id*)arg1 isDirty:(bool*)arg2;
- (bool)dirty;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 store:(id)arg5;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 store:(id)arg6;
- (id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2 autoUpdating:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)labeledValueIdentifier;
- (id)name;
- (id)originalName;
- (id)propertyKey;
- (void)recheckContactStore;
- (void)setAbDatabaseUUID:(id)arg1;
- (void)setAbIdentifier:(int)arg1;
- (void)setAbUid:(int)arg1;
- (void)setActionType:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabeledValueIdentifier:(id)arg1;
- (void)setOriginalName:(id)arg1;
- (void)setPropertyKey:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (id)store;
- (long long)type;
- (id)value;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)performActionWithCompletion:(id /* block */)arg1;
- (void)performActionWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performActionWithExtensionContext:(id)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)favoritesEntryForUserActionItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (id)localizedBundleName;
- (id)localizedContactPropertyLabel;

@end
