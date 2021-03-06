/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSetNowPlayingClientMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRNowPlayingClientProtobuf *client;

- (id)client;
- (id)initWithClient:(id)arg1;
- (unsigned long long)type;

@end
