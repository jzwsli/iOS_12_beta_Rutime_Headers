/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetCarPowerLevelStatusIntentResponse : INIntentResponse <INGetCarPowerLevelStatusIntentResponseExport> {
    _INPBGetCarPowerLevelStatusIntentResponse * _responseMessagePBRepresentation;
}

@property (nonatomic, copy) NSNumber *chargePercentRemaining;
@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSMeasurement *distanceRemaining;
@property (nonatomic, copy) NSNumber *fuelPercentRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

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
- (id)chargePercentRemaining;
- (long long)code;
- (id)distanceRemaining;
- (void)encodeWithCoder:(id)arg1;
- (id)fuelPercentRemaining;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)propertiesByName;
- (void)setChargePercentRemaining:(id)arg1;
- (void)setDistanceRemaining:(id)arg1;
- (void)setFuelPercentRemaining:(id)arg1;
- (void)setPropertiesByName:(id)arg1;

@end
