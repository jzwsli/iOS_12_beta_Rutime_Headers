/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivityAssetWrapper : NSObject <NSSecureCoding> {
    NSString * _assetLocalIdentifier;
}

@property (readonly) NSString *assetLocalIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetLocalIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
