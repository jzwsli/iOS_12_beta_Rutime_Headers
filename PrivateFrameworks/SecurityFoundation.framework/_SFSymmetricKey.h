/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFSymmetricKey : _SFKey {
    id  _symmetricKeyInternal;
}

@property (nonatomic, readonly, copy) _SFSymmetricKeySpecifier *keySpecifier;

+ (Class)_attributesClass;

- (void).cxx_destruct;
- (id)_keyData;
- (id)initRandomKeyWithSpecifier:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3;
- (id)keyData;

@end
