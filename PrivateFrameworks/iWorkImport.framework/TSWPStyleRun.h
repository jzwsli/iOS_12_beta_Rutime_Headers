/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStyleRun : NSObject {
    NSDictionary * _attributes;
    unsigned long long  _charIndex;
    TSWPCharacterStyle * _characterStyle;
    struct __CTFont { } * _ctFont;
    unsigned int  _flags;
    struct { 
        double spaceBefore; 
        double attachmentHeight; 
        double ascent; 
        double descent; 
        double leadingAbove; 
        double leadingBelow; 
        double spaceAfter; 
    }  _fontHeightInfo;
    unsigned long long  _runLength;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic) unsigned long long charIndex;
@property (nonatomic, retain) TSWPCharacterStyle *characterStyle;
@property (nonatomic) struct __CTFont { }*ctFont;
@property (nonatomic) unsigned int flags;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; } fontHeightInfo;
@property (nonatomic) unsigned long long runLength;

- (void).cxx_destruct;
- (id)attributes;
- (unsigned long long)charIndex;
- (id)characterStyle;
- (bool)coalesceWith:(id)arg1;
- (struct __CTFont { }*)ctFont;
- (unsigned int)flags;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; })fontHeightInfo;
- (unsigned long long)runLength;
- (void)setAttributes:(id)arg1;
- (void)setCharIndex:(unsigned long long)arg1;
- (void)setCharacterStyle:(id)arg1;
- (void)setCtFont:(struct __CTFont { }*)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFontHeightInfo:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; })arg1;
- (void)setRunLength:(unsigned long long)arg1;

@end
