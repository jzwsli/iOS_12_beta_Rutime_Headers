/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFBlockObserver : MFObserver {
    id /* block */  _completionBlock;
    id /* block */  _failureBlock;
    id /* block */  _resultBlock;
}

- (void)dealloc;
- (id)initWithResultBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
