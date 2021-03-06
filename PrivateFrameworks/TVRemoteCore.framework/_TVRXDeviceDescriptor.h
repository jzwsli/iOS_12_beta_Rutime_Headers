/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRXDeviceDescriptor : NSObject <NSSecureCoding> {
    NSString * _connectionType;
}

@property (getter=_connectionType, setter=_setConnectionType:, nonatomic, copy) NSString *connectionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_connectionType;
- (id)_init;
- (void)_setConnectionType:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
