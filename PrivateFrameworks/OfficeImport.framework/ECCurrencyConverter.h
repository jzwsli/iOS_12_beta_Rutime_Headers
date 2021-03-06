/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECCurrencyConverter : NSObject {
    NSMutableDictionary * mLassoToXlCurrencyCode;
    NSMutableDictionary * mXlAccountingFormat;
    NSMutableDictionary * mXlToLassoCurrencyCode;
    NSMutableDictionary * mXlToLassoCurrencyCodeBySymbol;
}

+ (id)currencyConverter;

- (void)dealloc;
- (id)lassoCurrencyCodeForDollar;
- (id)lassoCurrencyCodeFromXl:(id)arg1;
- (void)populateDictionaries;
- (int)xlAccountFormatFromLasso:(id)arg1;
- (id)xlCurrencyCodeFromLasso:(id)arg1;

@end
