/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOServer : NSObject {
    GEODaemon * _daemon;
}

@property (nonatomic) GEODaemon *daemon;

+ (bool)canHandleIncomingMessage:(id)arg1;
+ (id)identifier;
+ (Class)peerClass;
+ (Class)requestClassForMethod:(id)arg1;
+ (bool)shouldStartImmediately;
+ (bool)usesModernRequestReply;

- (void).cxx_destruct;
- (id)daemon;
- (id)description;
- (void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;
- (void)handleRequest:(id)arg1;
- (void)peerDidConnect:(id)arg1;
- (void)peerDidDisconnect:(id)arg1;
- (void)setDaemon:(id)arg1;

@end
