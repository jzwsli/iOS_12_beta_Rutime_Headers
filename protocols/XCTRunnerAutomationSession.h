/* made by EzioChiu.
 */

@protocol XCTRunnerAutomationSession <NSObject>

@required

- (XCTElementQueryResults *)matchesForQuery:(XCTElementQuery *)arg1 error:(id*)arg2;
- (void)notifyWhenAnimationsAreIdle:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)notifyWhenMainRunLoopIsIdle:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)supportsAnimationsIdleNotifications;
- (bool)supportsMainRunLoopIdleNotifications;

@end
