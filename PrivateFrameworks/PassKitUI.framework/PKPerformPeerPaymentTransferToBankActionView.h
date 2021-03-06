/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPerformPeerPaymentTransferToBankActionView : UIView <PKEnterCurrencyAmountViewDelegate, PKEnterValueNewBalanceViewDelegate, PKPeerPaymentAddBankAcountInformationViewControllerDelegate, PKPeerPaymentPerformActionView, UITableViewDataSource, UITableViewDelegate> {
    PKPeerPaymentAccount * _account;
    PKContinuousButton * _addAccountButton;
    UILabel * _addAccountDetailLabel;
    PKPeerPaymentBankAccountInformation * _bankInformation;
    NSDecimalNumber * _cardBalance;
    UIImageView * _checkmarkImageView;
    NSDecimalNumber * _currentAmount;
    NSNumberFormatter * _currentAmountFormatter;
    <PKPerformActionViewDelegate> * _delegate;
    PKEnterCurrencyAmountView * _enterCurrencyAmountView;
    NSDecimalNumber * _maxBalance;
    NSDecimalNumber * _maxLoadAmount;
    NSDecimalNumber * _minBalance;
    NSDecimalNumber * _minLoadAmount;
    PKEnterValueNewBalanceView * _newBalanceView;
    PKPeerPaymentService * _peerPaymentService;
    UITableView * _tableView;
    UILabel * _tranferMessageLabel;
    UILabel * _tranferTitleLabel;
    bool  _transferComplete;
}

@property (nonatomic, retain) PKPeerPaymentAccount *account;
@property (nonatomic, readonly) UITextField *amountTextField;
@property (nonatomic, copy) NSDecimalNumber *cardBalance;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPerformActionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *maxBalance;
@property (nonatomic, copy) NSDecimalNumber *maxLoadAmount;
@property (nonatomic, copy) NSDecimalNumber *minBalance;
@property (nonatomic, copy) NSDecimalNumber *minLoadAmount;
@property (readonly) Class superclass;
@property (nonatomic) bool transferComplete;

- (void).cxx_destruct;
- (id)_addAccountButton;
- (id)_addAccountDetailLabel;
- (void)_addAccountInformation:(id)arg1;
- (id)_checkmarkImageView;
- (void)_createSubviews;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (void)_handleEditAccountInformationButtonPressed;
- (bool)_isCurrentAmountValid;
- (void)_presentAddBankAccountViewController;
- (void)_presentViewController:(id)arg1;
- (void)_setRightBarButtonEnabledState;
- (bool)_shouldEnableMaxBalanceTransferButton;
- (bool)_shouldShakeWithNewAmount:(id)arg1;
- (id)_tableView;
- (unsigned long long)_topPadding;
- (id)_tranferMessageLabel;
- (id)_tranferTitleLabel;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (void)_updateMaxBalanceTransferButtonIfNecessary;
- (id)account;
- (id)amountTextField;
- (void)amountTextFieldShouldAcceptTouches:(bool)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (id)cardBalance;
- (id)delegate;
- (void)didTapNewBalanceView;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)initWithAccount:(id)arg1 bankInformation:(id)arg2;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (void)layoutSubviews;
- (id)maxBalance;
- (id)maxLoadAmount;
- (id)minBalance;
- (id)minLoadAmount;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (void)saveLastInputValues;
- (id)serviceProviderData;
- (void)setAccount:(id)arg1;
- (void)setCardBalance:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (void)setTransferComplete:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)transactionAmount;
- (id)transactionCurrency;
- (bool)transferComplete;
- (void)willDismissViewController;
- (void)willMoveToWindow:(id)arg1;

@end
