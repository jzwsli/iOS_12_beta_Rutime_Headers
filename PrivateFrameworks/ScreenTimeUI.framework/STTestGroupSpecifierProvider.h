/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    bool  _isHidden;
    NSTimer * _timer;
}

@property (nonatomic, retain) NSTimer *timer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isHidden;
- (void)setIsHidden:(bool)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;
- (void)timerFired:(id)arg1;

@end
