/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDRubyRun : WDCharacterRun {
    WDCharacterRun * mPhoneticRun;
    WDRubyProperties * mRubyProperties;
}

- (void)appendPhoneticRunString:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithParagraph:(id)arg1;
- (id)phoneticRun;
- (id)phoneticRunString;
- (id)rubyBase;
- (id)rubyProperties;
- (int)runType;
- (void)setPhoneticRunString:(id)arg1;

@end
