/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPConnectionsUtils : NSObject

+ (id)calendarBundleIdentifier;
+ (id)calendarUserActivityExternalIDKey;
+ (id)calendarUserActivityIdentifier;
+ (bool)isClientAuthorizedForSemanticTriggers:(id)arg1;
+ (bool)isValidLinguisticQuery:(id)arg1;
+ (unsigned char)locationFieldFromSemanticTag:(unsigned char)arg1;
+ (id)mapsBundleIdentifier;
+ (id)safariBundleIdentifier;
+ (bool)shouldAggregateLabel:(id)arg1 withValue:(id)arg2 query:(id)arg3;
+ (id)siriBundleIdentifier;
+ (id)springboardBundleIdentifier;
+ (id)supportedLocationSemanticTypes;
+ (id)triggerTypeFromQuery:(id)arg1;

@end
