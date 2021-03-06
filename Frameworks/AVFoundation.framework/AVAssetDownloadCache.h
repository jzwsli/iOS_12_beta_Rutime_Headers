/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal * _internal;
}

- (id)URL;
- (id)_asset;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (bool)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;

@end
