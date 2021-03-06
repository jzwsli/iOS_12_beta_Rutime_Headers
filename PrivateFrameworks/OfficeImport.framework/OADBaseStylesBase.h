/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBaseStylesBase : NSObject {
    OADColorScheme * mColorScheme;
    OADFontScheme * mFontScheme;
    OADStyleMatrix * mStyleMatrix;
}

@property (nonatomic, retain) OADColorScheme *colorScheme;
@property (nonatomic, retain) OADFontScheme *fontScheme;
@property (nonatomic, retain) OADStyleMatrix *styleMatrix;

- (id)colorScheme;
- (void)dealloc;
- (id)description;
- (id)fontScheme;
- (void)setColorScheme:(id)arg1;
- (void)setFontScheme:(id)arg1;
- (void)setStyleMatrix:(id)arg1;
- (id)styleMatrix;

@end
