/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAdvertisingSettingsProvider : NSObject <SXAdvertisingSettingsProvider> {
    <SXDocumentControllerProvider> * _documentControllerProvider;
}

@property (nonatomic, readonly) <SXAdvertisingSettings> *advertisingSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)advertisingSettings;
- (id)documentControllerProvider;
- (id)initWithDocumentControllerProvider:(id)arg1;

@end
