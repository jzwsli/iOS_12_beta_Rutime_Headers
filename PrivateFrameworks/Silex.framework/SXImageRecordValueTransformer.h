/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXImageRecordValueTransformer : NSObject <SXDataRecordValueTransformer> {
    SXDocumentController * _documentController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXDocumentController *documentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)documentController;
- (id)initWithDocumentController:(id)arg1;
- (id)transformValueForRecord:(id)arg1 descriptor:(id)arg2;

@end
