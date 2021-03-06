/* made by EzioChiu.
 */

@protocol PXPeopleFetchResult <NSObject, NSFastEnumeration>

@required

- (bool)containsObject:(id <PXPerson>)arg1;
- (long long)count;
- (<PXPerson> *)objectAtIndex:(unsigned long long)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;

@end
