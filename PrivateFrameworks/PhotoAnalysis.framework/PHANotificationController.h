/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHANotificationController : NSObject {
    PGManager * _graphManager;
}

- (void).cxx_destruct;
- (id)bestDateForDeliveringNotification;
- (void)fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (void)fireNotificationForSuggestionIdentifiers:(id)arg1;
- (id)initWithGraphManager:(id)arg1;
- (void)postNotificationForMemory:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (void)postNotificationForSuggestion:(id)arg1 deliveryDate:(id)arg2;
- (bool)shouldFireNotificationForMemories:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (bool)userIsActivelyUsingPhotos;

@end
