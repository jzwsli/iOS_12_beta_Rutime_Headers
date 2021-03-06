/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKReminderTimelineEntry : NTKTimelineEntryModel {
    bool  _displayAsConflicting;
    NSDate * _dueDate;
    unsigned long long  _overlappingReminderCount;
    NSString * _primaryReminderId;
    NSString * _primaryReminderTitle;
    NSString * _secondaryReminderTitle;
}

@property (nonatomic) bool displayAsConflicting;
@property (nonatomic, retain) NSDate *dueDate;
@property (nonatomic) unsigned long long overlappingReminderCount;
@property (nonatomic, retain) NSString *primaryReminderId;
@property (nonatomic, retain) NSString *primaryReminderTitle;
@property (nonatomic, retain) NSString *secondaryReminderTitle;

+ (id)_analogReminderImageProvider;
+ (id)_colorReminderImageProvider;
+ (id)_modularSmallReminderImageProvider;
+ (id)_modularXLReminderImageProvider;
+ (id)_reminderImageAnalog;
+ (id)_reminderImageColorAnalog;
+ (id)_reminderImageModular;
+ (id)_reminderImageVictory;
+ (id)_reminderImageXLarge;
+ (id)loadingEntryForFamily:(long long)arg1;
+ (id)lockedEntryForFamily:(long long)arg1;

- (void).cxx_destruct;
- (id)_createCircularTemplateMedium:(bool)arg1;
- (id)_createExtraLargeTemplate;
- (id)_createLargeModularTemplate;
- (id)_createLargeUtilityTemplate;
- (id)_createSmallModularTemplate;
- (id)_createSmallUtilityTemplate;
- (id)description;
- (bool)displayAsConflicting;
- (id)dueDate;
- (unsigned long long)overlappingReminderCount;
- (id)primaryReminderId;
- (id)primaryReminderTitle;
- (id)secondaryReminderTitle;
- (void)setDisplayAsConflicting:(bool)arg1;
- (void)setDueDate:(id)arg1;
- (void)setOverlappingReminderCount:(unsigned long long)arg1;
- (void)setPrimaryReminderId:(id)arg1;
- (void)setPrimaryReminderTitle:(id)arg1;
- (void)setSecondaryReminderTitle:(id)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end
