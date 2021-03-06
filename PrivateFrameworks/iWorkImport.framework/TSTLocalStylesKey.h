/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLocalStylesKey : NSObject <NSCopying> {
    TSTCellStyle * _cellStyle;
    TSWPParagraphStyle * _textStyle;
}

@property (nonatomic, retain) TSTCellStyle *cellStyle;
@property (nonatomic, retain) TSWPParagraphStyle *textStyle;

- (void).cxx_destruct;
- (id)cellStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setCellStyle:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;

@end
