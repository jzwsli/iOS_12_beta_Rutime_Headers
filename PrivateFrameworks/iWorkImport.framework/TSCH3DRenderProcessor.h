/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRenderProcessor : NSObject

+ (void)initialize;
+ (id)processor;

- (bool)canRenderPrefilteredLines;
- (id)effects;
- (void)geometry:(id)arg1;
- (void)normals:(id)arg1;
- (void)popRenderState;
- (void)popState;
- (void)pushRenderState;
- (void)pushState;
- (struct RenderHints { struct TextureSizeHint { int x_1_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; })renderHints;
- (struct RenderState { bool x1; int x2; bool x3; bool x4; bool x5; bool x6; bool x7; float x8; float x9; struct EnableClipDistances { struct array<bool, 8> { bool x_1_2_1[8]; } x_10_1_1; } x10; })renderState;
- (void)setRenderHints:(const struct RenderHints { struct TextureSizeHint { int x_1_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; }*)arg1;
- (void)setRenderState:(const struct RenderState { bool x1; int x2; bool x3; bool x4; bool x5; bool x6; bool x7; float x8; float x9; struct EnableClipDistances { struct array<bool, 8> { bool x_1_2_1[8]; } x_10_1_1; } x10; }*)arg1;
- (void)texcoords:(id)arg1;
- (long long)texture:(id)arg1;
- (void)updateRenderState;

@end
