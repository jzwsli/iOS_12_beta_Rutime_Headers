/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemGestureManager : NSObject <UIGestureRecognizerDelegate> {
    NSMutableDictionary * _displayIdentityToManagerMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_defaultsDidChange:(id)arg1;
- (id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 toDisplayWithIdentity:(id)arg3;
- (void)addGestureRecognizer:(id)arg1 toDisplay:(id)arg2;
- (void)addGestureRecognizer:(id)arg1 toDisplayWithIdentity:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)removeGestureRecognizer:(id)arg1 fromDisplay:(id)arg2;
- (void)removeGestureRecognizer:(id)arg1 fromDisplayWithIdentity:(id)arg2;
- (id)windowForSystemGesturesForDisplayWithIdentity:(id)arg1;

@end
