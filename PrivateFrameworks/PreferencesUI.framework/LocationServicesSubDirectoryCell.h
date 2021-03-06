/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface LocationServicesSubDirectoryCell : PSTableCell {
    LocationUsageMixin * _location;
}

@property (nonatomic, readonly) LocationUsageMixin *location;

- (void).cxx_destruct;
- (bool)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)location;

@end
