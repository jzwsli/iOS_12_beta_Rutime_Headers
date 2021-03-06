/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBGatewayManager : NSObject {
    NSString * _allowedGroupName;
    NSArray * _bbSections;
    NSDateComponents * _dndFromComponents;
    NSDateComponents * _dndToComponents;
    bool  _isScheduled;
    unsigned long long  _privilegedSenderType;
    BBSettingsGateway * _settingsGateway;
}

@property (nonatomic, readonly) NSString *allowedGroupName;
@property (nonatomic, retain) NSArray *bbSections;
@property (nonatomic, readonly) NSDateComponents *dndFromComponents;
@property (nonatomic, readonly) NSDateComponents *dndToComponents;
@property (nonatomic, readonly) bool isScheduled;
@property (nonatomic, readonly) unsigned long long privilegedSenderType;
@property (nonatomic, retain) BBSettingsGateway *settingsGateway;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)allowedGroupName;
- (id)bbSections;
- (void)dealloc;
- (id)dndFromComponents;
- (id)dndToComponents;
- (id)init;
- (bool)isScheduled;
- (void)loadBBSections;
- (void)loadDNDState;
- (unsigned long long)privilegedSenderType;
- (bool)repeatedCalls;
- (void)setBbSections:(id)arg1;
- (void)setSettingsGateway:(id)arg1;
- (id)settingsGateway;

@end
