/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKDocumentSelection : TSKSelection {
    TSUWeakReference * mDocumentRootReference;
}

@property (nonatomic, readonly) TSKDocumentRoot *documentRoot;

+ (Class)archivedSelectionClass;

- (void)dealloc;
- (id)description;
- (id)documentRoot;
- (unsigned long long)hash;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
