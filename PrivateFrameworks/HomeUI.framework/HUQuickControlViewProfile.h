/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlViewProfile : NSObject <NSCopying> {
    unsigned long long  _controlSize;
    <HFIconDescriptor> * _decorationIconDescriptor;
    <HFDynamicFormattingValue> * _supplementaryFormattedValue;
}

@property (nonatomic) unsigned long long controlSize;
@property (nonatomic, retain) <HFIconDescriptor> *decorationIconDescriptor;
@property (nonatomic, readonly) double gestureDragCoefficient;
@property (nonatomic, retain) <HFDynamicFormattingValue> *supplementaryFormattedValue;

- (void).cxx_destruct;
- (unsigned long long)controlSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decorationIconDescriptor;
- (double)gestureDragCoefficient;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setDecorationIconDescriptor:(id)arg1;
- (void)setSupplementaryFormattedValue:(id)arg1;
- (id)supplementaryFormattedValue;

@end
