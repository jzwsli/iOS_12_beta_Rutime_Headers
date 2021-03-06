/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKWatchListModificationRequestOperation : WLKNetworkRequestOperation

- (id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2;
- (id)initWithAction:(unsigned long long)arg1 channelID:(id)arg2 externalID:(id)arg3;
- (id)initWithAction:(unsigned long long)arg1 identifier:(id)arg2;
- (id)initWithAction:(unsigned long long)arg1 statsID:(id)arg2;
- (id)responseProcessor;

@end
