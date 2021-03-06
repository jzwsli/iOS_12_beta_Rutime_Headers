/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBOfficeArtReaderState : OABReaderState {
    int  mCurrentTextType;
    WBReader * mReader;
    WXReadState * mXmlDocumentState;
}

@property (nonatomic) int currentTextType;
@property (nonatomic) WBReader *reader;

- (int)currentTextType;
- (void)dealloc;
- (id)initWithClient:(Class)arg1;
- (id)reader;
- (void)setCurrentTextType:(int)arg1;
- (void)setReader:(id)arg1;
- (id)xmlDrawingState;

@end
