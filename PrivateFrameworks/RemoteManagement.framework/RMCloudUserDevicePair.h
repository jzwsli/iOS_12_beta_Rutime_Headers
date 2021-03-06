/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCloudUserDevicePair : RMUniquedManagedObject <RMReconcilableObject>

@property (nonatomic, copy) NSString *altURI;
@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, copy) NSUUID *sortKey;
@property (nonatomic, retain) RMCloudDevice *sourceDevice;
@property (nonatomic, retain) RMCloudUser *sourceUser;
@property (nonatomic, copy) NSString *uri;

+ (id)fetchRequest;
+ (bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id*)arg3;

- (id)computeUniqueIdentifier;
- (void)setUri:(id)arg1;

@end
