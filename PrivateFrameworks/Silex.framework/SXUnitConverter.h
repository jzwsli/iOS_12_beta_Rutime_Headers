/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXUnitConverter : NSObject {
    id /* block */  _contextBlock;
}

@property (nonatomic, copy) id /* block */ contextBlock;

+ (double)convertColumnGutterToPoints:(double)arg1 contextBlock:(id /* block */)arg2;
+ (double)convertComponentWidthToPoints:(double)arg1 contextBlock:(id /* block */)arg2;
+ (double)convertDocumentMarginToPoints:(double)arg1 contextBlock:(id /* block */)arg2;
+ (double)convertValueToPoints:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg1 contextBlock:(id /* block */)arg2;
+ (double)convertViewportHeightToPoints:(double)arg1 contextBlock:(id /* block */)arg2;
+ (double)convertViewportMaxToPoints:(double)arg1 contextBlock:(id /* block */)arg2;
+ (double)convertViewportMinToPoints:(double)arg1 contextBlock:(id /* block */)arg2;
+ (double)convertViewportWidthToPoints:(double)arg1 contextBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)contextBlock;
- (double)convertValueToPoints:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg1;
- (id)initWithContextBlock:(id /* block */)arg1;
- (void)setContextBlock:(id /* block */)arg1;

@end
