/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamStrokeAndBlendOpt : TDreamProgramWrapperTwoInput {
    float  oneOverSize;
    int  oneOverSizeUniform;
}

- (id)init;
- (void)setOneOverSize:(const float*)arg1;
- (void)setUniforms;

@end
