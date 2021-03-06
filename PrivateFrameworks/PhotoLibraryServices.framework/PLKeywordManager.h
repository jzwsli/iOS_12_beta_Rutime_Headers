/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLKeywordManager : NSObject {
    PLGatekeeperClient * _assetsdClient;
    PLManagedObjectContext * _libraryContext;
    PLPhotoLibrary * _photoLibrary;
}

+ (void)_inq_loadKeywordsUsingContextIfNecessary:(id)arg1;
+ (void)_invalidateKeywordCache;
+ (id)_writeQueue;

- (bool)_assetsdSetKeywords:(id)arg1 forAssetUUID:(id)arg2;
- (id)_inq_keywordObjectsForKeywords:(id)arg1;
- (id)_keywordsForAsset:(id)arg1;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)keywordsForAsset:(id)arg1;
- (id)keywordsForAssetWithUUID:(id)arg1;
- (id)keywordsForAssets:(id)arg1;
- (bool)setKeywords:(id)arg1 forAssetUUID:(id)arg2;

@end
