/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDServiceGroupModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *services;

+ (id)properties;

- (id)dependentUUIDs;

@end
