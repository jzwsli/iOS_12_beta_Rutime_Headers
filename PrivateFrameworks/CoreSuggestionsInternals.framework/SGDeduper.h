/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDeduper : NSObject

+ (id)_dedupeGenericContactDetails:(id)arg1;
+ (id)_dedupePostalAddresses:(id)arg1;
+ (id /* block */)bucketerWithEqualityTest:(id /* block */)arg1;
+ (id /* block */)bucketerWithLabeledBuckets:(id /* block */)arg1;
+ (id /* block */)bucketerWithMapping:(id /* block */)arg1;
+ (id)dedupe:(id)arg1 bucketer:(id /* block */)arg2 resolver:(id /* block */)arg3;
+ (id)dedupeContactDetails:(id)arg1;
+ (void)enumerateEKEventsForPseudoEventBySimilarTitleAndStartTime:(id)arg1 store:(id)arg2 usingBlock:(id /* block */)arg3;
+ (id /* block */)resolveByPairs:(id /* block */)arg1;
+ (id /* block */)resolveByScoreBreakTiesArbitrarily:(id /* block */)arg1;
+ (id /* block */)resolveSGContactDetailsPreferringPhraseExtractionsAndLabels;
+ (id)splitContactDetailsByType:(id)arg1;

@end
