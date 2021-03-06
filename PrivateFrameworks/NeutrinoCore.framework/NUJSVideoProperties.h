/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSVideoProperties : NUJSProxy <NUJSVideoPropertiesExport>

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cleanAperture;
@property (readonly) <NUVideoProperties> *videoProperties;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cleanAperture;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithVideoProperties:(id)arg1 context:(id)arg2;
- (id)videoProperties;

@end
