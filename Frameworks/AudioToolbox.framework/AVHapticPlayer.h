/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AVHapticPlayer : NSObject {
    unsigned long long  _behavior;
    NSArray * _channelArray;
    HapticClient * _client;
    bool  _resourcesAllocated;
}

@property (nonatomic) unsigned long long behavior;
@property (nonatomic, readonly) NSArray *channels;
@property (readonly) HapticClient *client;
@property (readonly) double currentMediaTime;
@property (readonly) double hapticLatency;
@property (readonly) bool resourcesAllocated;

+ (bool)isSupported;

- (void).cxx_destruct;
- (void)allocateRenderResourcesWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)behavior;
- (id)channels;
- (id)client;
- (double)currentMediaTime;
- (void)dealloc;
- (void)deallocateRenderResources;
- (bool)detachHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)enableSequenceLooping:(unsigned long long)arg1 enable:(bool)arg2 error:(id*)arg3;
- (bool)finishWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)getBehavior;
- (double)hapticLatency;
- (id)initAndReturnError:(id*)arg1;
- (void)invalidateChannels;
- (bool)loadHapticEvent:(id)arg1 reply:(id /* block */)arg2;
- (bool)loadHapticPattern:(id)arg1 reply:(id /* block */)arg2;
- (bool)loadHapticSequence:(id)arg1 reply:(id /* block */)arg2;
- (bool)playHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 offset:(double)arg3;
- (bool)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2;
- (void)prewarmWithCompletionHandler:(id /* block */)arg1;
- (void)releaseChannels;
- (bool)resourcesAllocated;
- (void)setBehavior:(unsigned long long)arg1;
- (bool)setNumberOfChannels:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setSequenceParam:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 param:(unsigned long long)arg4 value:(float)arg5 error:(id*)arg6;
- (void)startRunningWithCompletionHandler:(id /* block */)arg1;
- (bool)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (void)stopPrewarm;
- (void)stopRunning;

@end
