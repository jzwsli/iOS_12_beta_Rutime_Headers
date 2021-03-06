/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPStorage : NSObject

+ (void)_filterBlacklistedNamedEntityRecords:(id)arg1;
+ (bool)clearNamedEntityStoreWithError:(id*)arg1;
+ (bool)clearTopicStoreWithError:(id*)arg1;
+ (bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3;
+ (id)findLocalEntitiesWithSource:(id)arg1 stream:(id)arg2;
+ (id)findLocalTopicsWithSource:(id)arg1 stream:(id)arg2;
+ (id)mapItemForPlaceName:(id)arg1 error:(id*)arg2;
+ (id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2;
+ (bool)removeCachedMapItemsBeforeCutoffDate:(id)arg1 error:(id*)arg2;
+ (bool)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2;
+ (id)topicRecordsWithQuery:(id)arg1 error:(id*)arg2;

@end
