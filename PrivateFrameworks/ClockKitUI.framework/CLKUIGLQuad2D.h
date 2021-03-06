/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIGLQuad2D : CLKUIQuad2D {
    unsigned int  _isPrepared;
    unsigned int  _primaryTexture;
    CLKUIGLProgram * _program;
    unsigned int  _secondaryTexture;
    unsigned int  _vertexArray;
    unsigned int  _vertexBuffer;
}

- (void).cxx_destruct;
- (void)_createVertexArray;
- (void)_deleteVertexArray;
- (void)encodeGLforSize:(struct CLKUIQuadSize { int x1; int x2; })arg1;
- (void)prepare;
- (void)purge;

@end
