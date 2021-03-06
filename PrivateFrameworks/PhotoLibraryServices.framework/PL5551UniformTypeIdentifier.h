/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PL5551UniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>

@property (nonatomic, readonly) bool conformsToImage;
@property (nonatomic, readonly) bool conformsToMovie;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isPrimaryFormat, nonatomic, readonly) bool primaryFormat;
@property (readonly) Class superclass;

- (bool)conformsToImage;
- (bool)conformsToMovie;
- (id)identifier;
- (bool)isPrimaryFormat;

@end
