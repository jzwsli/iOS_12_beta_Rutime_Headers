/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDispatchQueueBlockOnDemandExtension : PFDispatchQueueExtension <PFDispatchQueueBlockOnDemandExecuting> {
    unsigned long long  _countToExecute;
    unsigned long long  _enqueuedCount;
    PFExtendedDispatchQueue * _queue;
}

- (void).cxx_destruct;
- (void)_willEnqueueOneBlock;
- (void)installOnQueue:(id)arg1;
- (id)newBlockInfo;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(id /* block */)arg3;
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(id /* block */)arg3;
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;
- (unsigned long long)runBlockCount:(unsigned long long)arg1;
- (unsigned long long)runOneBlock;

@end
