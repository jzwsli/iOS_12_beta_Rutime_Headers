/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKCompatibilityEntryInternal : GKInternalRepresentation {
    NSString * _bundleID;
    NSSet * _versions;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSSet *versions;

+ (id)secureCodedPropertyKeys;

- (id)bundleID;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setVersions:(id)arg1;
- (id)versions;

@end
