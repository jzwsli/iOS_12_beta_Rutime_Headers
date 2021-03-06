/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLVertexAttributeVBOLoader : TSCH3DGLVBOLoader {
    struct AttributeSpecs { 
        unsigned long long stride; 
        unsigned long long offset; 
        unsigned long long components; 
    }  mAttributeSpecs;
    int  mLocation;
}

+ (int)attributeLocation:(id)arg1 shaderHandle:(id)arg2;
+ (id)loader;

- (id).cxx_construct;
- (bool)activateResource:(id)arg1 location:(int)arg2 specs:(const struct AttributeSpecs { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg3 insideSession:(id)arg4;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)loadSingleValue:(const float*)arg1 components:(unsigned long long)arg2;
- (void)loadSingleValueInBuffer:(id)arg1;
- (void)setClientState:(const struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)arg1;

@end
