/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface CoreMLVersion : NSObject {
    NSNumber * _frameworkVersionNumber;
}

@property (nonatomic, copy) NSNumber *frameworkVersionNumber;

+ (id)getInternalFrameworkVersion;

- (void).cxx_destruct;
- (id)frameworkVersionNumber;
- (id)init;
- (void)setFrameworkVersionNumber:(id)arg1;

@end
