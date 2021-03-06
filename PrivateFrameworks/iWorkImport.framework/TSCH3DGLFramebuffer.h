/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLFramebuffer : TSCH3DFramebuffer <TSCH3DPipelineLinkable> {
    TSCH3DGLContext * mContext;
    bool  mHasSetDefaultStates;
}

@property (nonatomic, readonly) TSCH3DGLContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTexturable;
@property (readonly) Class superclass;

+ (id)framebufferWithContext:(id)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg3;

- (void)clean;
- (void)clear:(unsigned int)arg1;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)initWithContext:(id)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg3;
- (bool)isTexturable;
- (id)output;
- (id)resolvingFramebuffer;
- (void)setClearColor:(const struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; }*)arg1;
- (void)setClearDepth:(float)arg1;
- (void)setColorMask:(const struct tvec4<bool> { union { bool x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; union { bool x_2_1_1; bool x_2_1_2; bool x_2_1_3; } x2; union { bool x_3_1_1; bool x_3_1_2; bool x_3_1_3; } x3; union { bool x_4_1_1; bool x_4_1_2; bool x_4_1_3; } x4; }*)arg1;
- (void)setDepthFunction:(int)arg1;
- (void)setDepthMask:(unsigned char)arg1;
- (void)wipe:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; }*)arg1;

@end
