/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTextField : OADTextRun {
    OADParagraphProperties * mParagraphProperties;
    NSString * mText;
}

- (unsigned long long)characterCount;
- (void)dealloc;
- (id)init;
- (bool)isEmpty;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;
- (void)setText:(id)arg1;
- (id)text;

@end
