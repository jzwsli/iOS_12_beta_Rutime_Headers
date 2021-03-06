/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKActivityFaceViewFactory : NSObject <NTKUtilityComplicationFactoryDelegate, NTKWellnessTimelineModelSubscriber> {
    bool  _analog;
    NTKUtilityComplicationFactory * _complicationFactory;
    long long  _dataMode;
    <NTKActivityFaceViewFactoryDelegate> * _delegate;
    CLKDevice * _device;
    bool  _hasBeenLiveOrOnDeck;
    bool  _isLoadingData;
    double  _lastWristRaiseTime;
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    NTKWellnessEntryModel * _nowEntryModel;
    bool  _showsCanonicalContent;
    bool  _showsLockedContent;
    bool  _wantsUpdateNowEntryModelNextLive;
    double  _wristRaiseTimoutDuration;
}

@property (nonatomic, readonly) bool analog;
@property (nonatomic, retain) NTKUtilityComplicationFactory *complicationFactory;
@property (nonatomic, readonly) NTKWellnessEntryModel *currentEntryModel;
@property (nonatomic) long long dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKActivityFaceViewFactoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) bool hasBeenLiveOrOnDeck;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLoadingData;
@property (nonatomic) bool showsCanonicalContent;
@property (nonatomic) bool showsLockedContent;
@property (readonly) Class superclass;

+ (void)_purgeGLContexts;
+ (void)initialize;
+ (id)prelaunchApplicationIdentifiers;
+ (void)prewarmForDevice:(id)arg1;
+ (bool)userActiveEnergyIsCalories;
+ (id)userActiveEnergyUnit;

- (void).cxx_destruct;
- (id)_canonicalEntryModel;
- (id)_colorComplicationSlots;
- (id)_complicationSlots;
- (void)_configureComplicationFactory:(id)arg1;
- (id)_dateComplicationFontForStyle:(unsigned long long)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (void)_handleActiveEnergyUnitChange;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_lisaGapForState:(long long)arg1;
- (void)_loadCurrentEntry;
- (void)_loadCurrentEntryForce:(bool)arg1;
- (void)_resetWristRaiseAnimationTimeout;
- (id)_slotForUtilitySlot:(long long)arg1;
- (void)_updateRingsForCurrentEntryModelAnimated:(bool)arg1;
- (id)_utilityComplicationSlots;
- (long long)_utilitySlotForSlot:(id)arg1;
- (bool)analog;
- (id)complicationFactory;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (id)currentEntryModel;
- (long long)dataMode;
- (void)dealloc;
- (id)debugStringForEntry:(id)arg1;
- (id)delegate;
- (id)device;
- (void)faceView:(id)arg1 configureComplicationView:(id)arg2 forSlot:(id)arg3;
- (double)faceView:(id)arg1 keylineCornerRadiusForComplicationSlot:(id)arg2;
- (unsigned long long)faceView:(id)arg1 keylineLabelAlignmentForComplicationSlot:(id)arg2;
- (long long)faceView:(id)arg1 legacyLayoutOverrideforComplicationType:(unsigned long long)arg2 slot:(id)arg3;
- (id)faceView:(id)arg1 newLegacyViewForComplication:(id)arg2 family:(long long)arg3 slot:(id)arg4;
- (bool)hasBeenLiveOrOnDeck;
- (id)initForAnalog:(bool)arg1 forDevice:(id)arg2;
- (bool)isLoadingData;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (void)launchActivityApp;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)setComplicationFactory:(id)arg1;
- (void)setDataMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasBeenLiveOrOnDeck:(bool)arg1;
- (void)setIsLoadingData:(bool)arg1;
- (void)setShowsCanonicalContent:(bool)arg1;
- (void)setShowsLockedContent:(bool)arg1;
- (bool)shouldPerformFromZeroWristRaise;
- (bool)showsCanonicalContent;
- (bool)showsLockedContent;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(id)arg1;

@end
