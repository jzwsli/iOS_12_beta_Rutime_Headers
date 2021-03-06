/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)allIndexableObjectIDs;
- (void)contextWillSave:(id)arg1;
- (id)dataSourceIdentifier;
- (id)indexableObjectIDsWithIdentifiers:(id)arg1;
- (id)newManagedObjectContext;
- (id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2;
- (id)persistentStoreCoordinator;

@end
