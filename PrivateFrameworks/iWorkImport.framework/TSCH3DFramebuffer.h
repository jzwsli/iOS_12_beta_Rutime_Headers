/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebuffer : NSObject {
    struct FramebufferAttributes { 
        int type; 
        long long samples; 
        int colorDataType; 
        int colorFormat; 
        int depthDataType; 
        bool linearFilter; 
        bool discardHint; 
    }  mFramebufferAttributes;
}

+ (id)framebufferWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg1;

- (id).cxx_construct;
- (const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)framebufferAttributes;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg1;

@end
