/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand

@property (nonatomic) bool allowsPunchOut;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, copy) NSArray *intentSlotKeyPaths;
@property (nonatomic) bool shouldRunHandleIntent;

+ (id)processIntent;
+ (id)processIntentWithDictionary:(id)arg1 context:(id)arg2;

- (bool)allowsPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)intentSlotKeyPaths;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAllowsPunchOut:(bool)arg1;
- (void)setIntent:(id)arg1;
- (void)setIntentSlotKeyPaths:(id)arg1;
- (void)setShouldRunHandleIntent:(bool)arg1;
- (bool)shouldRunHandleIntent;

@end
