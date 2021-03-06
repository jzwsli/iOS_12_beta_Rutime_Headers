/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFDistinctUntilChangedObservable : MFObservable {
    id  _lastObservedResult;
    NSLock * _lock;
    <MFObservable> * _observable;
}

- (bool)_isLastResultDistinctFromResult:(id)arg1;
- (void)dealloc;
- (id)initWithObservable:(id)arg1;
- (id)subscribe:(id)arg1;

@end
