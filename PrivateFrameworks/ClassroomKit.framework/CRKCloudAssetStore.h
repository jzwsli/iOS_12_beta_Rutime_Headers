/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudAssetStore : NSObject {
    NSCache * _cache;
    CRKFileBasedKeyedDataStore * _store;
}

@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, retain) CRKFileBasedKeyedDataStore *store;

+ (id)new;

- (void).cxx_destruct;
- (id)assetDataForIdentifier:(id)arg1;
- (id)assetUrlForIdentifier:(id)arg1;
- (id)cache;
- (id)init;
- (id)initWithDirectoryUrl:(id)arg1;
- (id)initWithFileBasedKeyedDataStore:(id)arg1;
- (bool)removeAllAssets;
- (bool)removeAssetDataForIdentifier:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (id)storeAssetData:(id)arg1;
- (bool)storeAssetData:(id)arg1 forIdentifier:(id)arg2;

@end
