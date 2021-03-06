/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFOperationQueueScheduler : NSObject <MFScheduler> {
    NSOperationQueue * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithMaxConcurrentOperationCount:(unsigned long long)arg1;
- (void)performBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1;
- (void)performSyncBlock:(id /* block */)arg1;

@end
