/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTaggedPointerDataStoreKey : PFTaggedPointer <PLResourceDataStoreKey, PLTableThumbResourceKey>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyWithKeyStruct:(const void*)arg1 keyLength:(unsigned long long)arg2 forStoreID:(unsigned int)arg3;

- (id)description;
- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initWithKeyStruct:(const void*)arg1;
- (bool)isValid;
- (id)keyData;
- (struct CGImage { }*)newTableThumbImage;
- (bool)representsSquareResource;

@end
