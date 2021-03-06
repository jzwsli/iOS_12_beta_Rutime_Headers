/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDUserDefinedShapeLibraryIndexChangeObject : NSObject {
    unsigned long long  _changeType;
    TSKDocumentRoot * _documentRoot;
    NSIndexSet * _indexesChanged;
}

@property unsigned long long changeType;
@property (retain) TSKDocumentRoot *documentRoot;
@property (retain) NSIndexSet *indexesChanged;

- (void).cxx_destruct;
- (unsigned long long)changeType;
- (id)documentRoot;
- (id)indexesChanged;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setDocumentRoot:(id)arg1;
- (void)setIndexesChanged:(id)arg1;

@end
