/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLSocialService : NSObject <NSCopying> {
    NSString * _identifier;
    long long  _maximumNumberOfCharacters;
    NSString * _storeItemIdentifier;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long maximumNumberOfCharacters;
@property (nonatomic, copy) NSString *storeItemIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithServiceDictionary:(id)arg1;
- (long long)maximumNumberOfCharacters;
- (void)setIdentifier:(id)arg1;
- (void)setMaximumNumberOfCharacters:(long long)arg1;
- (void)setStoreItemIdentifier:(id)arg1;
- (id)storeItemIdentifier;

@end
