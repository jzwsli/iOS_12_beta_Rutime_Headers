/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudInMemoryTaskManager : NSObject {
    NSMutableDictionary * _resourceIDsToDownloadTasks;
    NSMutableDictionary * _taskIDsToDownloadTasks;
}

- (id)_identifierForResource:(id)arg1;
- (bool)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)arg1 taskIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelTaskWithTaskIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)reportCompletionForResource:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)reset;
- (void)setTransferTask:(id)arg1 forResource:(id)arg2;

@end
