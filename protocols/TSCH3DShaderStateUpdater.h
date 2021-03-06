/* made by EzioChiu.
 */

@protocol TSCH3DShaderStateUpdater

@required

- (long long)attribute:(NSString *)arg1 resource:(TSCH3DResource *)arg2 specs:(const struct AttributeSpecs { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg3;
- (long long)texture:(id)arg1 attributes:(const struct TextureAttributes { int x1; int x2; bool x3; bool x4; bool x5; long long x6; struct TextureSizeHint { int x_7_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_7_1_2; } x7; bool x8; }*)arg2;

@end
