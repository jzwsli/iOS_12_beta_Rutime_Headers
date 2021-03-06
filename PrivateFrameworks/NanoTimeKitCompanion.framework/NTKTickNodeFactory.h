/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTickNodeFactory : NSObject

+ (id)_shaderCacheForDevice:(id)arg1;
+ (id)_shaderWithTickWidth:(double)arg1 filterWidth:(double)arg2 forDevice:(id)arg3;
+ (id)_tickTextureForDevice:(id)arg1;
+ (void)colorizeTicks:(id)arg1 baseColor:(id)arg2 accentColor:(id)arg3 baseAlpha:(double)arg4 accentAlpha:(double)arg5 accentModulo:(long long)arg6;
+ (id)imagesDictionaryForDevice:(id)arg1;
+ (void)layoutNodes:(id)arg1 forDevice:(id)arg2 offset:(unsigned long long)arg3 center:(struct CGPoint { double x1; double x2; })arg4 radius:(double)arg5 angleMultiplier:(double)arg6 scale:(double)arg7 rotate:(bool)arg8 round:(bool)arg9;
+ (void)setBackgroundColor:(id)arg1 onTicks:(id)arg2;
+ (id)textureAtlasForDevice:(id)arg1;
+ (id)ticks:(unsigned int)arg1 forDevice:(id)arg2 center:(struct CGPoint { double x1; double x2; })arg3 radius:(double)arg4 color1:(id)arg5 color2:(id)arg6 smallSize:(struct CGSize { double x1; double x2; })arg7 largeSize:(struct CGSize { double x1; double x2; })arg8 smallFilterWidth:(double)arg9 largeFilterWidth:(double)arg10 l1mod:(unsigned int)arg11 l2mod:(unsigned int)arg12;

@end
