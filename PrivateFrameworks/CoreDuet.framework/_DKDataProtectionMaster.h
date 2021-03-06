/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKDataProtectionMaster : NSObject {
    NSMutableDictionary * _availableState;
    bool  _deviceFormatedForContentProtection;
    NSMutableDictionary * _handlers;
    bool  _notifyEnabled;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)deregisterStateChangeHandler:(id)arg1;
- (bool)deviceHasBeenUnlockedSinceBoot;
- (bool)deviceIsLocked;
- (bool)deviceIsPasswordConfigured;
- (void)handleKeyBagLockNotification;
- (id)init;
- (bool)isDataAvailableFor:(id)arg1;
- (bool)isDataAvailableForClassA;
- (bool)isDataAvailableForClassC;
- (id)registerStateChangeHandler:(id /* block */)arg1;

@end
