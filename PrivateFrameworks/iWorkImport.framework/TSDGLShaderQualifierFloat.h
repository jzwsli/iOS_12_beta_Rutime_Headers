/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLShaderQualifierFloat : TSDGLShaderQualifier {
    float  _GLfloatValue;
    float  _proposedGLfloatValue;
}

@property (nonatomic, readonly) float GLfloatValue;
@property (nonatomic) float proposedGLfloatValue;

- (float)GLfloatValue;
- (id)description;
- (float)proposedGLfloatValue;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setProposedGLfloatValue:(float)arg1;

@end
