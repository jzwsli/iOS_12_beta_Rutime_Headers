/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioFetchMetadataResponse : ICRadioResponse

@property (nonatomic, readonly, copy) NSArray *allStorePlatformMetadata;

- (id)_storePlatformMetadataDictionaryFromRadioMetadataDictionary:(id)arg1;
- (id)allStorePlatformMetadata;
- (id)storePlatformMetadataForStoreAdamID:(long long)arg1;

@end
