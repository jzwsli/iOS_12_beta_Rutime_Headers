/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

@interface ADInstallAttributionData : NSObject {
    NSString * _adNetworkID;
    NSNumber * _adamID;
    NSNumber * _campaignID;
    NSString * _signature;
    NSNumber * _timestamp;
    NSString * _uuid;
}

@property (nonatomic, readonly, copy) NSString *adNetworkID;
@property (nonatomic, readonly, copy) NSNumber *adamID;
@property (nonatomic, readonly, copy) NSNumber *campaignID;
@property (nonatomic, readonly, copy) NSString *signature;
@property (nonatomic, readonly, copy) NSNumber *timestamp;
@property (nonatomic, readonly, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)adNetworkID;
- (id)adamID;
- (id)campaignID;
- (id)initWithDict:(id)arg1;
- (id)signature;
- (id)timestamp;
- (id)uuid;

@end
