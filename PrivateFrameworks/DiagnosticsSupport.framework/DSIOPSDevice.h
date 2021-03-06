/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSIOPSDevice : NSObject {
    NSDictionary * _info;
}

@property (nonatomic, retain) NSDictionary *info;

+ (id)deviceWithDeviceIdentifier:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;

- (void).cxx_destruct;
- (id)info;
- (id)information;
- (id)initWithDeviceIdentifier:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (id)serialNumber;
- (void)setInfo:(id)arg1;

@end
