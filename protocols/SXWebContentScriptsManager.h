/* made by EzioChiu.
 */

@protocol SXWebContentScriptsManager <NSObject>

@required

- (void)addScript:(id <SXWebContentScript>)arg1;
- (void)executeScript:(id <SXWebContentScript>)arg1;
- (void)removeAllScripts;
- (void)removeScript:(id <SXWebContentScript>)arg1;

@end
