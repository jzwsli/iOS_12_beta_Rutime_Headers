/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextLayouter : NSObject {
    STTextTangierDocumentRoot * _documentRoot;
    NSSet * _exclusionPaths;
    TSDLayoutController * _layoutController;
    STTextTangierContainerInfo * _textInfo;
    SXTextSource * _textSource;
}

@property (nonatomic, retain) STTextTangierDocumentRoot *documentRoot;
@property (nonatomic, retain) NSSet *exclusionPaths;
@property (nonatomic, retain) TSDLayoutController *layoutController;
@property (nonatomic, readonly) NSArray *paragraphRanges;
@property (nonatomic, retain) STTextTangierContainerInfo *textInfo;
@property (nonatomic, retain) SXTextSource *textSource;

- (void).cxx_destruct;
- (void)addExclusionPath:(id)arg1;
- (void)assignExclusionPaths;
- (double)baselineForLastLine;
- (struct CGSize { double x1; double x2; })boundingSize;
- (double)calculateHeightForWidth:(double)arg1;
- (void)createTextInfoIfNeeded;
- (id)documentRoot;
- (id)exclusionPathIndexes;
- (id)exclusionPaths;
- (id)firstColumn;
- (id)init;
- (id)initWithTextSource:(id)arg1 andDocumentRoot:(id)arg2;
- (void)invalidate;
- (id)layoutController;
- (id)paragraphRanges;
- (void)removeAllExclusionPaths;
- (void)reset;
- (void)setDocumentRoot:(id)arg1;
- (void)setExclusionPaths:(id)arg1;
- (void)setLayoutController:(id)arg1;
- (void)setTextInfo:(id)arg1;
- (void)setTextSource:(id)arg1;
- (id)textInfo;
- (id)textLayout;
- (id)textSource;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validAnchorRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)verticalLocationOfCharacterAtIndex:(unsigned long long)arg1;
- (id)wpLayout;
- (id)wpStorage;

@end
