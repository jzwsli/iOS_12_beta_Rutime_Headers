/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary * _managersByBundleID;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)mainPluginManager;
- (id)pluginManagerForBundle:(id)arg1;
- (void)registerPlugins;
- (void)registerPluginsFromBundle:(id)arg1;

@end
