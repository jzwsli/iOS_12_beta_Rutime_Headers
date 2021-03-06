/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol> {
    NSXPCConnection * _daemonConnection;
}

@property (nonatomic, readonly) NSXPCConnection *daemonConnection;

+ (id)daemonConnection;

- (void).cxx_destruct;
- (id)daemonConnection;
- (void)dealloc;
- (id)init;
- (void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)reportsNotYetSubmittedWithReply:(id /* block */)arg1;
- (void)retireReports:(id)arg1 withReply:(id /* block */)arg2;

@end
