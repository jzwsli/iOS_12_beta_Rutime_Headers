/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLBarButtonItem : UIBarButtonItem {
    unsigned long long  _QLType;
}

@property unsigned long long QLType;

- (unsigned long long)QLType;
- (bool)isEqual:(id)arg1;
- (void)setQLType:(unsigned long long)arg1;

@end
