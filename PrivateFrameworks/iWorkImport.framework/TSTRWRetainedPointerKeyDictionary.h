/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTRWRetainedPointerKeyDictionary : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  mRWLock;
    TSURetainedPointerKeyDictionary * mRetainedPointerKeyDictionary;
}

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
