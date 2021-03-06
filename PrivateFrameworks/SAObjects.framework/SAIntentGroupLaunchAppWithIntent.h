/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand

@property (nonatomic, retain) SAIntentGroupProtobufMessage *handledIntent;

+ (id)launchAppWithIntent;
+ (id)launchAppWithIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)handledIntent;
- (bool)requiresResponse;
- (void)setHandledIntent:(id)arg1;

@end
