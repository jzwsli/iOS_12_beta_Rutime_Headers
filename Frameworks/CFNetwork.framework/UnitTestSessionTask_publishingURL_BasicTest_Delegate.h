/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface UnitTestSessionTask_publishingURL_BasicTest_Delegate : NSObject <NSURLSessionTaskDelegate> {
    struct SmartBlockWithArgs<bool, NSError *> { 
        struct BlockHolderVar<bool, NSError *> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _didDidCompleteWithErrorCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) /* Warning: unhandled struct encoding: '{SmartBlockWithArgs<bool' */ struct  didDidCompleteWithErrorCompletionBlock; /* unknown property attribute:  NSError *>}^{__shared_weak_count}} */
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (struct SmartBlockWithArgs<bool, NSError *> { struct BlockHolderVar<bool, NSError *> {} *x1; struct __shared_weak_count {} *x2; })didDidCompleteWithErrorCompletionBlock;
- (void)setDidDidCompleteWithErrorCompletionBlock:(struct SmartBlockWithArgs<bool, NSError *> { struct BlockHolderVar<bool, NSError *> {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
