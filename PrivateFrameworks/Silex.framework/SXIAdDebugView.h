/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXIAdDebugView : UILabel {
    unsigned long long  _adType;
}

@property (nonatomic, readonly) unsigned long long adType;

- (unsigned long long)adType;
- (id)initWithType:(unsigned long long)arg1;
- (void)setState:(int)arg1 description:(id)arg2;

@end
