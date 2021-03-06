/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncSession : HDSyncSession {
    NSDictionary * _anchorClockForExcludedStores;
    NSSet * _excludedSyncStores;
}

@property (nonatomic, readonly) NSDictionary *anchorClockForExcludedStores;

- (void).cxx_destruct;
- (id)anchorClockForExcludedStores;
- (id)excludedSyncStores;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)predicateForSyncEntityClass:(Class)arg1;
- (void)setExcludedSyncStores:(id)arg1;

@end
