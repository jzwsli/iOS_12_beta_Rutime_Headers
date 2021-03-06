/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface _HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
}

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) NSString *destination;
@property (getter=isGlobal, readonly) bool global;
@property (readonly) NSUUID *identifier;
@property (getter=isLocal, readonly) bool local;

+ (id)identifierNamespace;
+ (bool)isValidDestination:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isGlobal;
- (bool)isLocal;

@end
