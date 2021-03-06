/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSharedStreamsColorSpace : NSObject <PLColorSpaceIdentity> {
    NSString * _colorSpaceName;
}

@property (nonatomic, copy) NSString *colorSpaceName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)colorSpaceName;
- (void)setColorSpaceName:(id)arg1;

@end
