/* made by EzioChiu.
 */

@protocol PUEditPluginSessionDelegate <NSObject>

@optional

- (void)editPluginSession:(PUEditPluginSession *)arg1 didEndWithCompletionType:(unsigned long long)arg2;
- (void)editPluginSessionAvailabilityDidChange:(PUEditPluginSession *)arg1;
- (void)editPluginSessionWillBegin:(PUEditPluginSession *)arg1;

@end
