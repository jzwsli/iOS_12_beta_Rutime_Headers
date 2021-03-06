/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKNumberFormat : TSKFormat <NSCopying> {
    unsigned long long  _decimalPlaces;
    int  _negativeStyle;
    bool  _showThousandsSeparator;
}

@property (nonatomic, readonly) unsigned long long decimalPlaces;
@property (nonatomic, readonly) int negativeStyle;
@property (nonatomic, readonly) bool showThousandsSeparator;

- (id)asNumberFormat;
- (unsigned long long)decimalPlaces;
- (id)description;
- (unsigned long long)hash;
- (id)initWithFormatType:(int)arg1;
- (id)initWithFormatType:(int)arg1 decimalPlaces:(unsigned long long)arg2 negativeStyle:(int)arg3 showSeparator:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (int)negativeStyle;
- (bool)showThousandsSeparator;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;

@end
