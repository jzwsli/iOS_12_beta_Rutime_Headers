/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKSiriBestPlayableForStatsIDsOperation : WLKNetworkRequestOperation {
    NSArray * _statsIDs;
}

@property (nonatomic, readonly, copy) NSArray *statsIDs;

- (void).cxx_destruct;
- (id)initWithStatsIDs:(id)arg1;
- (id)responseProcessor;
- (id)statsIDs;

@end
