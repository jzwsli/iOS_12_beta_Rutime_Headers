/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _UTTypeQueryForAllIdentifiers : _UTTypeQuery

+ (bool)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)_init;
- (bool)_shouldCacheResolvedResults;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
