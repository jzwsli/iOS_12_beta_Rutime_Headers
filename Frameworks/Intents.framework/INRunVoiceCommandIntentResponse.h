/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRunVoiceCommandIntentResponse : INIntentResponse <INRunVoiceCommandIntentResponseExport> {
    _INPBRunVoiceCommandIntentResponse * _responseMessagePBRepresentation;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, readonly) long long code;
@property (nonatomic, copy) NSNumber *customResponsesDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long intentCategory;
@property (nonatomic, copy) NSString *localizedAppName;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSString *responseTemplate;
@property (readonly) Class superclass;
@property (nonatomic) long long toggleState;
@property (nonatomic, copy) INArchivedObject *underlyingIntent;
@property (nonatomic, copy) INArchivedObject *underlyingIntentResponse;
@property (nonatomic, copy) NSString *verb;

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (long long)_intentResponseCode;
- (id)_responseMessagePBRepresentation;
- (id)appBundleId;
- (long long)code;
- (id)customResponsesDisabled;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (long long)intentCategory;
- (id)localizedAppName;
- (id)parameters;
- (id)propertiesByName;
- (id)responseTemplate;
- (void)setAppBundleId:(id)arg1;
- (void)setCustomResponsesDisabled:(id)arg1;
- (void)setIntentCategory:(long long)arg1;
- (void)setLocalizedAppName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setResponseTemplate:(id)arg1;
- (void)setToggleState:(long long)arg1;
- (void)setUnderlyingIntent:(id)arg1;
- (void)setUnderlyingIntentResponse:(id)arg1;
- (void)setVerb:(id)arg1;
- (long long)toggleState;
- (id)underlyingIntent;
- (id)underlyingIntentResponse;
- (id)verb;

@end
