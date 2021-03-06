/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _allowNonSecureHTTP;
    NSURL * _termsURL;
}

@property (nonatomic) bool allowNonSecureHTTP;
@property (nonatomic, retain) NSURL *termsURL;

- (void).cxx_destruct;
- (bool)allowNonSecureHTTP;
- (id)description;
- (void)setAllowNonSecureHTTP:(bool)arg1;
- (void)setTermsURL:(id)arg1;
- (id)termsURL;

@end
