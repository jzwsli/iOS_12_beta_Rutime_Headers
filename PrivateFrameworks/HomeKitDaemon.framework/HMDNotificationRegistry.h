/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNotificationRegistry : HMFObject <NSSecureCoding> {
    NSMutableDictionary * _notificationRegistry;
}

@property (nonatomic, retain) NSMutableDictionary *notificationRegistry;

+ (bool)doesKey:(id)arg1 matchMediaProfile:(id)arg2;
+ (id)keyForCharacteristic:(id)arg1;
+ (id)keyForProperty:(id)arg1 mediaProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allCharacteristicIdentifiers;
- (void)auditUsersForNotifications:(id)arg1 forHome:(id)arg2;
- (void)deregisterUsers:(id)arg1 forHome:(id)arg2;
- (void)disableNotification:(id)arg1 user:(id)arg2 ignoreLockReq:(bool)arg3 home:(id)arg4;
- (bool)disableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 characteristicsToDisableEvents:(id*)arg3;
- (bool)disableNotificationForProperties:(id)arg1 forUser:(id)arg2;
- (bool)enableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2;
- (bool)enableNotificationForProperties:(id)arg1 forUser:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)filterCharacteristics:(id)arg1 forUser:(id)arg2;
- (id)filterProperties:(id)arg1 forUser:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)notificationRegistry;
- (bool)removeRegistrationsForMediaProfile:(id)arg1;
- (void)setNotificationRegistry:(id)arg1;
- (id)shortDescription;
- (id)usersRegisteredForNotificationsForCharacteristics:(id)arg1;
- (id)usersRegisteredForNotificationsForProperties:(id)arg1;

@end
