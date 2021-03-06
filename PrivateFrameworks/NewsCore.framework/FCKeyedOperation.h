/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCKeyedOperation : NSObject <FCOperationCanceling> {
    <FCOperationCanceling> * _cancelHandler;
    bool  _cancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)executeForQueue:(id)arg1 delegate:(id)arg2 key:(id)arg3 completion:(id /* block */)arg4;

@end
