/* made by EzioChiu.
 */

@protocol IKJSDataItem <JSExport>

@required

- (JSValue *)getPropertyPath:(NSString *)arg1;
- (NSString *)identifier;
- (id)initWithType:(NSString *)arg1 :(NSString *)arg2;
- (void)setPropertyPath:(NSString *)arg1 :(JSValue *)arg2;
- (void)touchPropertyPath:(NSString *)arg1;
- (NSString *)type;

@end
