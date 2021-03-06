/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSString *mediaPassword;
@property (nonatomic, retain) NSNumber *mediaPeerToPeerEnabled;
@property (nonatomic, retain) NSNumber *minimumMediaUserPrivilege;

+ (id)defaultModelForHome:(id)arg1;
+ (id)modelIDForHome:(id)arg1;
+ (id)modelNamespace;
+ (id)properties;

@end
