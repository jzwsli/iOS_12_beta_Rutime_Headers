/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSSyncSettingsProvider : NSObject {
    NPSDomainAccessor * _accessor;
    <DNDSSyncSettingsProviderDelegate> * _delegate;
    DNDSSyncSettings * _syncSettings;
}

@property (nonatomic) <DNDSSyncSettingsProviderDelegate> *delegate;
@property (nonatomic, readonly, copy) DNDSSyncSettings *syncSettings;

- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (void)_updateSyncPreferences;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)syncSettings;

@end
