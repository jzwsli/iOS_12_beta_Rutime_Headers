/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBCarPlayDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool carPlayEnableAllStatusBarItemsOverride;
@property (nonatomic, retain) NSString *carPlayEndApplicationIdentifier;
@property (nonatomic, retain) NSArray *carPlayRecentlyUsedApplicationIdentifiers;
@property (nonatomic, retain) NSString *carPlayStartApplicationIdentifier;

- (void)_bindAndRegisterDefaults;

@end
