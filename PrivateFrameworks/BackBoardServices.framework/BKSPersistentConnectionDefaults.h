/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSPersistentConnectionDefaults : BSAbstractDefaultDomain

@property (nonatomic) int forceDemoMaxHBI;
@property (nonatomic, retain) NSString *wifiInterfaceName;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
