/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDatabaseLoggingMiddleware : NSObject <FCCKDatabaseOperationMiddleware> {
    bool  _allowNilDesiredKeys;
}

@property (nonatomic) bool allowNilDesiredKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addLoggersToOperation:(id)arg1 database:(id)arg2;
- (bool)allowNilDesiredKeys;
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)init;
- (id)initAllowingNilDesiredKeys:(bool)arg1;
- (void)setAllowNilDesiredKeys:(bool)arg1;

@end
