/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMachineReadableCodeResult : NSObject {
    AVMetadataMachineReadableCodeObject * _underlyingMachineReadableCodeObject;
}

@property (nonatomic, readonly) NSString *symbolString;
@property (nonatomic, readonly) AVMetadataMachineReadableCodeObject *underlyingMachineReadableCodeObject;

- (void).cxx_destruct;
- (id)initWithMachineReadableCodeObject:(id)arg1;
- (bool)isOfSignificantSize;
- (id)symbolString;
- (id)underlyingMachineReadableCodeObject;

@end
