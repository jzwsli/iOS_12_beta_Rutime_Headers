/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo {
    NSArray * _plAssets;
}

@property (nonatomic, retain) NSArray *plAssets;

- (void).cxx_destruct;
- (id)_fetchPhotoAssets:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (id)countsByAssetDisplayType;
- (id)init;
- (id)plAssets;
- (long long)sectionType;
- (void)setPlAssets:(id)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;

@end
