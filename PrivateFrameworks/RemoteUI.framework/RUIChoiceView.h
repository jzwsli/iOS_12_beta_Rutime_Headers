/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIChoiceView : UIView {
    UIButton * _bigChoice;
    UIView * _buttonTray;
    RUIElement * _header;
    BFFPaneHeaderView_RemoteUI * _headerView;
    UIScrollView * _scrollView;
    UIButton * _smallChoice;
    RUISubHeaderElement * _subHeader;
    RUIChoiceViewElement * _target;
    _UIBackdropView * _trayBackdrop;
    bool  _usesTwoButtonLayout;
}

@property (nonatomic, retain) RUIElement *header;
@property (nonatomic, readonly) UIView<RUIHeader> *headerView;
@property (nonatomic, retain) RUISubHeaderElement *subHeader;
@property (nonatomic) RUIChoiceViewElement *target;
@property (nonatomic) bool usesTwoButtonLayout;

- (void).cxx_destruct;
- (void)choiceTapped:(id)arg1;
- (id)header;
- (id)headerView;
- (id)init;
- (void)layoutSubviews;
- (void)setFirstChoiceTitle:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHelpLinkTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSecondChoiceTitle:(id)arg1;
- (void)setSubHeader:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setUsesTwoButtonLayout:(bool)arg1;
- (id)subHeader;
- (id)target;
- (id)titleLabel;
- (bool)usesTwoButtonLayout;

@end
