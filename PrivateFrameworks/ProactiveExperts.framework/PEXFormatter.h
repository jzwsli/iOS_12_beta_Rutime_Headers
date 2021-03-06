/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXFormatter : NSObject {
    NSCache * _appNameCache;
    NSString * _appNameDesiredLanguage;
    NSString * _appNameFallbackLanguage;
    NSDateFormatter * _birthdayFormatter;
    NSDateFormatter * _chineseBirthdayFormatter;
    PEXCriteria * _criteria;
    NSDateComponentsFormatter * _dateComponentFormatter;
    NSCache * _dateFormatCache;
    NSURL * _labeledValueLocalizationURL;
    NSLengthFormatter * _lengthFormatter;
    NSLocale * _locale;
    NSCache * _localizedLabelCache;
    NSDateFormatter * _longEventFormatter;
    NSMeasurementFormatter * _measurementDecimalFormatter;
    NSMeasurementFormatter * _measurementUnscaledFormatter;
    NSMeasurementFormatter * _measurementWholeFormatter;
    NSDateFormatter * _shortEventFormatter;
    NSDateFormatter * _yearlessChineseBirthdayFormatter;
}

+ (id)formatterWithCriteria:(id)arg1;
+ (id)keyDictionaryForCriteria:(id)arg1;
+ (id)new;

- (void).cxx_destruct;
- (id)_dateFormatForTemplate:(id)arg1;
- (id)_dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;
- (void)_initializeLocalizedLableCache;
- (bool)_isYearlessComponents:(id)arg1;
- (id)_locale;
- (id)_localizedStringForKey:(id)arg1;
- (void)_precacheDateFormats;
- (id)attributionPattern;
- (id)destinationLabel;
- (id)distanceLabel;
- (id)etaLabel;
- (id)formattedBirthday:(id)arg1;
- (id)formattedEventTime:(id)arg1;
- (id)formattedLengthInMeters:(double)arg1;
- (id)formattedMeasurement:(id)arg1 allowDecimals:(bool)arg2 scaleUnits:(bool)arg3;
- (id)formattedStringForLabel:(id)arg1;
- (id)formattedStringsForLabels:(id)arg1;
- (id)formattedTimeInterval:(double)arg1;
- (id)healthItemLabelForHealthType:(id)arg1;
- (id)init;
- (id)initWithCriteria:(id)arg1;
- (id)itemLabelForBundleId:(id)arg1 typeLabel:(id)arg2;
- (id)localizedAppNameForBundleIdentifier:(id)arg1;
- (id)makeBirthdayFormatter;
- (id)makeChineseBirthdayFormatter;
- (id)makeDateComponentFormatter;
- (id)makeLengthFormatter;
- (id)makeLongEventFormatter;
- (id)makeMeasurementDecimalFormatter;
- (id)makeMeasurementUnscaledFormatter;
- (id)makeMeasurementWholeFormatter;
- (id)makeShortEventFormatter;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)navigationItemLabelForTypeLabel:(id)arg1 destination:(id)arg2;
- (id)streetLabel;
- (id)timeLeftLabel;

@end
