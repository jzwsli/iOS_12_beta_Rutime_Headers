/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistorySessionsSnapshot : NSObject <WBSHistorySessions> {
    NSArray * _sessions;
}

@property (nonatomic, readonly) unsigned long long numberOfSessions;
@property (nonatomic, readonly, copy) NSArray *orderedSessions;

- (void).cxx_destruct;
- (void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithSessions:(id)arg1;
- (id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)itemsLastVisitedInSession:(id)arg1;
- (unsigned long long)numberOfItemsVisitedInSession:(id)arg1;
- (unsigned long long)numberOfSessions;
- (id)orderedSessions;

@end
