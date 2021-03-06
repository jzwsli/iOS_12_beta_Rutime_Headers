/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexDateFormatter : NSObject {
    NSDateFormatter * _dateFormatter;
    PLDateRangeFormatter * _dateRangeFormatter;
    NSString * _displayFormat;
    bool  _localeDidChange;
    NSString * _monthFormat;
    NSArray * _monthSymbols;
    NSString * _parseFormat;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _yearFormat;
}

- (id)_arrangedMonthSymbols;
- (id)_inqNewLocalizedStringFromDate:(id)arg1;
- (void)_inqSetupDateFormatter;
- (void)_inqUpdateDateFormat:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)dealloc;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;
- (id)localizedMonthStringsFromDate:(id)arg1;
- (id)localizedSeasonStringFromDate:(id)arg1;
- (id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(bool)arg2;
- (id)newLocalizedStringFromDate:(id)arg1;
- (id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2;

@end
