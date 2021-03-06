/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeManagerObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol> {
    HMDHomeManager * _homeManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHomeManager *homeManager;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_scanAccounts;
- (void)_scanCloudZones;
- (void)_scanHomes;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (void)scanObjects;

@end
