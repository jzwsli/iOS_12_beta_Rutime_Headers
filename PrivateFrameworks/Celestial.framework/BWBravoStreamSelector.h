/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBravoStreamSelector : NSObject {
    BWFigVideoCaptureStream * _currentMasterStream;
    bool  _ignoreFocusAndExposureStability;
    float  _initialFocusDistance;
    int  _initialLuxLevel;
    bool  _lockWhenExposureAndFocusAreStable;
    bool  _locked;
    bool  _lockedOnTele;
    float  _minFocusDistanceChangeForSceneChange;
    float  _minLuxLevelChangeForSceneChange;
    float  _previousZoomFactor;
    BWFigVideoCaptureStream * _recommendedMasterStream;
    bool  _resetSceneChangeMonitoring;
    bool  _sceneChangeDetected;
    int  _selectionBehavior;
    float  _teleAEGainHysteresisLag;
    float  _teleBaseZoomFactor;
    float  _teleMaxAEGain;
    int  _teleMaxGainReachedCounter;
    int  _teleMaxSubsequentFramesAtMaxGain;
    BWFigVideoCaptureStream * _teleStream;
    int  _teleToWideFocusDistance;
    bool  _usesLensMakersFocusDistance;
    int  _waitForFocusFrameCounter;
    BWFigVideoCaptureStream * _wideStream;
    int  _wideToTeleFocusDistance;
}

@property (nonatomic) bool ignoreFocusAndExposureStability;
@property (nonatomic) int selectionBehavior;

+ (void)initialize;

- (void)_attemptLockWithFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg1;
- (bool)_exposureAndFocusStableForSwitchOverForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg1;
- (id)_preferredMasterStreamForZoomFactor:(float)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg2;
- (bool)_selectionBehaviorAllowsSwitchOverForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg1 zoomFactor:(float)arg2;
- (void)_updateSceneChangeMonitorWithFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg1 fromMasterStream:(id)arg2 zoomFactor:(float)arg3;
- (bool)ignoreFocusAndExposureStability;
- (id)initWithStreamSelectionAttributes:(id)arg1 wideStream:(id)arg2 teleStream:(id)arg3;
- (void)lockWhenExposureAndFocusAreStable;
- (id)recommendMasterStreamUsingCurrentMasterStream:(id)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg2 zoomFactor:(float)arg3;
- (void)resetWithZoomFactor:(float)arg1 currentMasterStream:(id)arg2 teleMaxAEGain:(float)arg3;
- (int)selectionBehavior;
- (void)setIgnoreFocusAndExposureStability:(bool)arg1;
- (void)setSelectionBehavior:(int)arg1;
- (bool)telephotoLimitsReached:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg1;
- (void)unlock;

@end
