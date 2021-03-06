/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMMigrationPluginWrapperConnection : NSObject {
    DMXPCConnection * _connection;
}

+ (id)connection;

- (void).cxx_destruct;
- (void)handleMessage:(id)arg1;
- (id)init;
- (void)invalidate;
- (int)pid;
- (void)resume;
- (void)runPluginAtPath:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;

@end
