/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (nonatomic, retain) NSString *personID;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)keyPathsForValuesAffectingPersonID;
+ (id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(bool)arg3;

- (void)addAssetOrderedByDataTaken:(id)arg1;
- (void)awakeFromInsert;
- (void)enforceImageLimitIfNecessary;
- (id)personID;
- (void)setPersonID:(id)arg1;
- (bool)shouldDeleteWhenEmpty;

@end
