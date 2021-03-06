/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXInProcessCallSource : CXCallSource {
    CXInProcessProvider * _provider;
}

@property (nonatomic, retain) CXInProcessProvider *provider;

- (void).cxx_destruct;
- (id)identifier;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)vendorProtocolDelegate;

@end
