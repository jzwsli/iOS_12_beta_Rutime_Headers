/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPublicIdentityLookupService : NSObject {
    CKDKeyValueDiskCache * _cache;
    CKDClientContext * _context;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CKDKeyValueDiskCache *cache;
@property (nonatomic) CKDClientContext *context;

- (void).cxx_destruct;
- (id)cache;
- (void)configureRequest:(id)arg1 parentOperation:(id)arg2;
- (id)context;
- (id)initWithClientContext:(id)arg1;
- (void)removeCacheForLookupInfos:(id)arg1;
- (void)scheduleRequest:(id)arg1 forOperation:(id)arg2;
- (void)setCache:(id)arg1;
- (void)setContext:(id)arg1;

@end
