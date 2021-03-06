/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBatterySaverWatcher : NSObject {
    NSHashTable * _delegates;
}

@property (nonatomic, readonly) bool batterySaverModeEnabled;

+ (id)sharedBatterySaverWatcher;

- (void)addDelegate:(id)arg1;
- (bool)batterySaverModeEnabled;
- (void)dealloc;
- (void)removeDelegate:(id)arg1;

@end
