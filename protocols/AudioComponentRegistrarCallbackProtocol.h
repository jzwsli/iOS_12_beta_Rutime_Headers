/* made by EzioChiu.
 */

@protocol AudioComponentRegistrarCallbackProtocol

@required

- (void)registrationsChanged:(NSData *)arg1 fsHash:(NSData *)arg2;

@end
