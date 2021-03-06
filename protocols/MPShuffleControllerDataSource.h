/* made by EzioChiu.
 */

@protocol MPShuffleControllerDataSource <NSObject>

@required

- (unsigned long long)itemCountForShuffleController:(MPShuffleController *)arg1;
- (unsigned long long)shuffleController:(MPShuffleController *)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3;
- (id)shuffleController:(MPShuffleController *)arg1 identifierForItemAtIndex:(unsigned long long)arg2;

@end
