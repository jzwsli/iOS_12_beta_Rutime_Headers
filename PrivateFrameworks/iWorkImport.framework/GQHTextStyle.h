/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTextStyle : NSObject

+ (struct __CTFont { }*)createFontFromName:(struct __CFString { }*)arg1 size:(float)arg2;
+ (bool)getDefaultLineHeight:(struct __CFString { }*)arg1 fontSize:(float)arg2 defLineHeight:(int*)arg3;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 isSpan:(bool)arg4;
+ (const char *)name;
+ (struct __CFString { }*)platformCreateCssFontFamilyStringFromFontName:(struct __CFString { }*)arg1;
+ (bool)platformGetDefaultLineHeight:(struct __CFString { }*)arg1 fontSize:(float)arg2 defLineHeight:(int*)arg3;
+ (void)reduceFontSizeForSuperscriptedText:(id)arg1 style:(id)arg2 state:(id)arg3;

@end
