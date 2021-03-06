/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentStyle : SXJSONObject

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXBorder *border;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) SXFill *fill;
@property (nonatomic, readonly) UIColor *fullscreenBackgroundColor;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) SXShadow *shadow;
@property (nonatomic, readonly) SXDataTableStyle *tableStyle;
@property (nonatomic, readonly) unsigned long long traits;

- (id)fillWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)traits;

@end
