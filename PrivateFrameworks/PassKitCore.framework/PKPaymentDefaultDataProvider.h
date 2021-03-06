/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentDataProvider, PKPaymentServiceDelegate> {
    <PKPaymentDataProviderDelegate> * _delegate;
    NSLock * _delegateLock;
    NSHashTable * _delegates;
    PKPaymentService * _paymentService;
    NSObject<OS_dispatch_queue> * _replyQueue;
    PKSecureElement * _secureElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultPaymentPassIdentifier;
@property (nonatomic) <PKPaymentDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDeviceInRestrictedMode;
@property (nonatomic, readonly) bool isPaymentHandoffDisabled;
@property (nonatomic, readonly) NSString *secureElementIdentifier;
@property (nonatomic, readonly) bool secureElementIsProductionSigned;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessDelegatesWithHandler:(id /* block */)arg1;
- (void)addDelegate:(id)arg1;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)defaultPaymentPassIdentifier;
- (id)delegate;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;
- (id)deviceName;
- (id)expressPassesInformation;
- (id)expressPassesInformationWithCardType:(long long)arg1;
- (id)init;
- (bool)isDeviceInRestrictedMode;
- (bool)isPaymentHandoffDisabled;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(id /* block */)arg2;
- (id)secureElementIdentifier;
- (bool)secureElementIsProductionSigned;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultPaymentPassIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setPaymentHandoffDisabled:(bool)arg1;
- (bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (bool)supportsInAppPaymentsForPass:(id)arg1;
- (bool)supportsMessagesForPass:(id)arg1;
- (bool)supportsNotificationsForPass:(id)arg1;
- (bool)supportsTransactionsForPass:(id)arg1;
- (void)transactionCountByYearForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 completion:(id /* block */)arg5;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(id /* block */)arg5;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(id /* block */)arg7;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(id /* block */)arg3;

@end
