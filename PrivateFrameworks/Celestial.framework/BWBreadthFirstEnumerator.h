/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray * _holdQueue;
    NSMutableArray * _queue;
}

- (void)addChildren:(id)arg1;
- (void)dealloc;
- (id)initWithGraph:(id)arg1;
- (id)nextObject;

@end
