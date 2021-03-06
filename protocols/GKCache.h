/* made by EzioChiu.
 */

@protocol GKCache <NSObject>

@required

- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id <NSCopying>)arg2;

@end
