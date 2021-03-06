/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSyncOperationOptions : HMFObject {
    bool  _cloudConflict;
    NSString * _zoneName;
}

@property (getter=isCloudConflict, nonatomic) bool cloudConflict;
@property (nonatomic, readonly) NSString *zoneName;

+ (id)defaultFetchOptions:(id)arg1 cloudConflict:(bool)arg2;
+ (id)defaultPushOptions:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithZone:(id)arg1 cloudConflict:(bool)arg2;
- (id)description;
- (bool)isCloudConflict;
- (void)setCloudConflict:(bool)arg1;
- (id)zoneName;

@end
