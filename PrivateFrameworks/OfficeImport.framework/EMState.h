/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMState : CMState {
    EDSheet * _currentSheet;
    NSMutableDictionary * _hyperlinks;
    EDWorkbook * _workbook;
}

@property EDSheet *currentSheet;
@property (retain) EDWorkbook *workbook;

- (void).cxx_destruct;
- (id)currentSheet;
- (id)hyperlinkForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (void)setCurrentSheet:(id)arg1;
- (void)setHyperlink:(id)arg1 forRow:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (void)setWorkbook:(id)arg1;
- (id)workbook;

@end
