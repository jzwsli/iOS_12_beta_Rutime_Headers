/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchGetNavigationStatus : SADomainCommand

@property (nonatomic, copy) NSNumber *getRoute;

+ (id)getNavigationStatus;
+ (id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)getRoute;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setGetRoute:(id)arg1;

@end
