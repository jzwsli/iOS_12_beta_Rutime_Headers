/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerCellularSettings : NSObject {
    <NSObject> * _accountDidChangeNotificationObserver;
    NSNumber * _isCellularEnabledForDocumentsAndData;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_notifAccountStore;
+ (id)containerCellularSettings;

- (void).cxx_destruct;
- (void)_accountDidChange;
- (void)dealloc;
- (id)init;
- (bool)isCellularEnabled;

@end
