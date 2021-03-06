/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderArrayElementVariable : TSCH3DShaderVariable <TSCHUnretainedParent> {
    unsigned long long  mIndex;
    TSCH3DShaderVariable * mParent;
}

+ (id)variableWithParentVariable:(id)arg1 index:(unsigned long long)arg2;

- (void)clearParent;
- (void)dealloc;
- (id)initWithParentVariable:(id)arg1 index:(unsigned long long)arg2;

@end
