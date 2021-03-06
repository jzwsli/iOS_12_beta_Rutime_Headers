/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSearchableIndexBudgetConfiguration : NSObject <MFPubliclyDescribable> {
    bool  _autoStartMaintenanceIndexing;
    bool  _enableActivityBasedScheduling;
    long long  _numberOfItemsToIndexOnResume;
    double  _periodDuration;
    double  _time;
}

@property (nonatomic) bool autoStartMaintenanceIndexing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableActivityBasedScheduling;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *mf_publicDescription;
@property (nonatomic, readonly) long long numberOfItemsToIndexOnResume;
@property (nonatomic, readonly) double periodDuration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double time;

+ (id)defaultConfiguration;

- (bool)autoStartMaintenanceIndexing;
- (id)description;
- (bool)enableActivityBasedScheduling;
- (id)init;
- (id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3;
- (id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3 enableActivityBasedScheduling:(bool)arg4 autoStartMaintenanceIndexing:(bool)arg5;
- (id)mf_publicDescription;
- (long long)numberOfItemsToIndexOnResume;
- (double)periodDuration;
- (void)setAutoStartMaintenanceIndexing:(bool)arg1;
- (void)setEnableActivityBasedScheduling:(bool)arg1;
- (double)time;

@end
