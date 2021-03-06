/* made by EzioChiu.
 */

@protocol AFUIStateMachineDelegate <NSObject>

@required

- (void)stateMachine:(AFUIStateMachine *)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;

@optional

- (NSString *)stateMachine:(AFUIStateMachine *)arg1 descriptionForEvent:(long long)arg2;

@end
