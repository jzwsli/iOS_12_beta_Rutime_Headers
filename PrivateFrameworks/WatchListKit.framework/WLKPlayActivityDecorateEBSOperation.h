/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlayActivityDecorateEBSOperation : WLKNetworkRequestOperation {
    NSString * _channelID;
    NSString * _externalContentID;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly, copy) NSString *channelID;
@property (nonatomic, readonly, copy) NSString *externalContentID;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (id)channelID;
- (void)didFinish;
- (id)externalContentID;
- (id)initWithChannelID:(id)arg1 externalContentID:(id)arg2;
- (id)responseDictionary;
- (id)responseProcessor;

@end
