/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADSolidFill : OADFill {
    OADColor * mColor;
    bool  mIsColorOverridden;
}

+ (id)blackFill;
+ (id)defaultProperties;
+ (id)whiteFill;

- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isColorOverridden;
- (bool)isEqual:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setColor:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (bool)usesPlaceholderColor;

@end
