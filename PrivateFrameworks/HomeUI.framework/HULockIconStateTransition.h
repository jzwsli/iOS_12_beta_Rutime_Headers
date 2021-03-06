/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULockIconStateTransition : NSObject {
    unsigned long long  _fromState;
    unsigned long long  _toState;
}

@property (nonatomic, readonly) unsigned long long fromState;
@property (nonatomic, readonly) unsigned long long toState;

+ (id)transitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;

- (unsigned long long)fromState;
- (unsigned long long)toState;

@end
