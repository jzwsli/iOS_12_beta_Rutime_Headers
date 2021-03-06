/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKUserEnvironment : NSObject {
    NSString * _DSID;
    bool  _consented;
    NSArray * _consentedBrands;
    NSDictionary * _entitlements;
    NSString * _localeIdentifier;
    NSDictionary * _location;
    unsigned long long  _protocolVersion;
    NSString * _restrictions;
    NSString * _storeFrontIdentifier;
}

@property (nonatomic, retain) NSString *DSID;
@property (nonatomic) bool consented;
@property (nonatomic, retain) NSArray *consentedBrands;
@property (nonatomic, retain) NSDictionary *entitlements;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, readonly) NSDictionary *location;
@property (nonatomic) unsigned long long protocolVersion;
@property (nonatomic, retain) NSString *restrictions;
@property (nonatomic, retain) NSString *storeFrontIdentifier;

+ (id)currentEnvironment;
+ (void)setCurrentEnvironmentForTesting:(id)arg1;

- (void).cxx_destruct;
- (id)DSID;
- (unsigned long long)_hashForStoreStuff;
- (bool)consented;
- (id)consentedBrands;
- (id)description;
- (id)entitlements;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEnvironment:(id)arg1;
- (id)localeIdentifier;
- (id)location;
- (unsigned long long)protocolVersion;
- (id)restrictions;
- (void)setConsented:(bool)arg1;
- (void)setConsentedBrands:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setProtocolVersion:(unsigned long long)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (id)storeFrontIdentifier;

@end
