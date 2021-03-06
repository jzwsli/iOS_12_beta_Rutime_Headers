/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSVersion : NUJSObject

@property (nonatomic, readonly) NUVersion *version;

- (bool)hasProperty:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithVersion:(id)arg1 context:(id)arg2;
- (id)toString;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (id)version;

@end
