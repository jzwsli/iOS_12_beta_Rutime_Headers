/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFReaderAppearanceThemeSelectorTableViewCell : UITableViewCell {
    <SFReaderAppearanceThemeSelectorTableViewCellDelegate> * _delegate;
    UIButton * _grayButton;
    UIButton * _nightButton;
    long long  _selectedTheme;
    UIButton * _sepiaButton;
    UIStackView * _stackView;
    UIButton * _whiteButton;
}

@property (nonatomic) <SFReaderAppearanceThemeSelectorTableViewCellDelegate> *delegate;
@property (nonatomic) long long selectedTheme;

+ (double)requiredHeight;

- (void).cxx_destruct;
- (id)_buttonForTheme:(long long)arg1;
- (void)_changeSelectionForTheme:(long long)arg1 selected:(bool)arg2;
- (void)_createThemeButtons;
- (id)_imageForTheme:(long long)arg1 selected:(bool)arg2;
- (void)_themeButtonAction:(id)arg1;
- (id)_themeButtonImageWithFillColor:(id)arg1 strokeColor:(id)arg2 selected:(bool)arg3;
- (long long)_themeForButton:(id)arg1;
- (void)_updateSelectedTheme;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)selectedTheme;
- (void)setDelegate:(id)arg1;
- (void)setSelectedTheme:(long long)arg1;

@end
