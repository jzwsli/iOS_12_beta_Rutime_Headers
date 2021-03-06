/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSSQLiteStoreMigrator : NSObject {
    NSSQLiteAdapter * _adapter;
    NSMutableDictionary * _addedEntityMigrations;
    NSMutableDictionary * _attributeExtensionsToUpdate;
    NSSQLiteConnection * _connection;
    NSMutableDictionary * _copiedEntityMigrations;
    NSSQLModel * _dstModel;
    NSArray * _existingTableNames;
    bool  _hasPKTableChanges;
    NSMutableDictionary * _historyMigrationPropertyDataForEntityCache;
    NSMutableArray * _indexesToCreate;
    NSMutableArray * _indexesToDrop;
    NSMappingModel * _mappingModel;
    NSMutableArray * _pkTableUpdateStatements;
    NSMutableDictionary * _reindexedEntities;
    NSMutableDictionary * _reindexedPropertiesByEntity;
    NSMutableDictionary * _removedEntityMigrations;
    NSMutableDictionary * _sourceToDestinationEntityMap;
    NSSQLModel * _srcModel;
    NSSQLCore * _store;
    NSMutableDictionary * _tableMigrationDescriptionsByEntity;
    NSMutableDictionary * _transformedEntityMigrations;
}

@property (nonatomic, readonly) NSSQLiteAdapter *adapter;
@property (nonatomic, readonly) NSSQLModel *dstModel;
@property (nonatomic, retain) NSMutableDictionary *historyMigrationCache;
@property (nonatomic, readonly) NSSQLModel *srcModel;

+ (bool)_annotatesMigrationMetadata;
+ (void)_setAnnotatesMigrationMetadata:(bool)arg1;

- (void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 tableMigrationType:(int)arg3;
- (void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2;
- (long long)_countNullsInColumn:(id)arg1 forEntity:(id)arg2;
- (long long)_countUnreferencedPrimaryKeysForEntity:(id)arg1 inForeignKeyColumnName:(id)arg2 fromTable:(id)arg3;
- (void)_determineAncillaryModelIndexesForMigration;
- (void)_determineAttributeTriggerToMigrateForAttributeNamed:(id)arg1 withSourceEntity:(id)arg2 andDestinationEntity:(id)arg3;
- (void)_determineIndexesToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2;
- (void)_determinePropertyDependenciesOnIDForEntity:(id)arg1;
- (void)_determineRTreeExtensionsToMigrateForAttributeNamed:(id)arg1 withSourceEntity:(id)arg2 andDestinationEntity:(id)arg3;
- (void)_determineReindexedEntitiesAndAffectedProperties;
- (void)_disconnect;
- (id)_originalRootsForAddedEntity:(id)arg1;
- (void)_populateEntityMigrationDescriptionsAndEntityMap;
- (void)_populateTableMigrationDescriptions;
- (id)adapter;
- (bool)clearTombstoneColumnsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)createEntityMigrationStatements;
- (id)createStatementsForUpdatingEntityKeys;
- (void)dealloc;
- (bool)deleteStatementsForHistory;
- (id)dstModel;
- (id)entityMigrationDescriptionForEntity:(id)arg1;
- (void)generatePKTableUpdateStatements;
- (id)historyMigrationCache;
- (id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3;
- (bool)performMigration:(id*)arg1;
- (void)setHistoryMigrationCache:(id)arg1;
- (bool)shiftTombstones;
- (id)srcModel;
- (id)tableMigrationDescriptionForEntity:(id)arg1;
- (id)updateStatementsForHistoryChanges;
- (bool)validateMandatoryAttribute:(id)arg1 onEntity:(id)arg2 error:(id*)arg3;
- (bool)validateMandatoryRelationship:(id)arg1 onEntity:(id)arg2 error:(id*)arg3;
- (bool)validateMigratedDataFromEntityMapping:(id)arg1 error:(id*)arg2;

@end
