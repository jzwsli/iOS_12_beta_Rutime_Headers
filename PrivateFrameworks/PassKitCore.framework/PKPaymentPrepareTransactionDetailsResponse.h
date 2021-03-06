/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse {
    NSDecimalNumber * _amount;
    NSData * _instructions;
    NSString * _secureElementIdentifier;
    NSData * _signature;
}

@property (nonatomic, readonly) NSDecimalNumber *amount;
@property (nonatomic, readonly) NSData *instructions;
@property (nonatomic, readonly) NSString *secureElementIdentifier;
@property (nonatomic, readonly) NSData *signature;

- (void).cxx_destruct;
- (id)amount;
- (id)initWithData:(id)arg1;
- (id)instructions;
- (id)secureElementIdentifier;
- (id)signature;

@end
