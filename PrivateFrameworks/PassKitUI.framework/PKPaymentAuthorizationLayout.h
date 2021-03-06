/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationLayout : NSObject {
    double  _contentHorizontalMargin;
    double  _glyphDimension;
    long long  _style;
    double  _valueLeftMargin;
}

@property (nonatomic, readonly) double contentHorizontalMargin;
@property (nonatomic, readonly) double glyphDimension;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) double valueLeftMargin;

- (double)contentHorizontalMargin;
- (double)glyphDimension;
- (id)initWithStyle:(long long)arg1;
- (long long)style;
- (double)valueLeftMargin;

@end
