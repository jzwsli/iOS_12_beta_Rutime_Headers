/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, retain) NSArray *systemGestureLoggingOptions;
@property (getter=isSystemGesturesAllowed, nonatomic, readonly) bool systemGesturesAllowed;

- (void)_bindAndRegisterDefaults;

@end
