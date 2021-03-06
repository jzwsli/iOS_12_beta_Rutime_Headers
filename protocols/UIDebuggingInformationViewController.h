/* made by EzioChiu.
 */

@protocol UIDebuggingInformationViewController

@optional

- (void)addPropertyForKey:(NSString *)arg1 ofType:(long long)arg2 defaultValue:(NSValue *)arg3 minimumValue:(NSValue *)arg4 maximumValue:(NSValue *)arg5;
- (void)addPropertyObserver:(id <UIDebuggingInformationObserver>)arg1 forKey:(NSString *)arg2;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;
- (void)removePropertyObserver:(id <UIDebuggingInformationObserver>)arg1 forKey:(NSString *)arg2;

@end
