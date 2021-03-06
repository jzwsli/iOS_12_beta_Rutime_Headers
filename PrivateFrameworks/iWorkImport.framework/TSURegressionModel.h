/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSURegressionModel : NSObject {
    int  mErrorType;
    bool  mModelValid;
}

- (double)coefficientAtIndex:(int)arg1;
- (id)equationString;
- (int)errorType;
- (double)estimateForX:(double*)arg1;
- (id)formattedStringWithCoefficient:(double)arg1 locale:(id)arg2;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1;
- (id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (bool)isModelValid;
- (int)numCoefficients;
- (int)numSuperscriptRanges;
- (double)rSquared;
- (int)regressionType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })superscriptRangeAtIndex:(int)arg1;

@end
