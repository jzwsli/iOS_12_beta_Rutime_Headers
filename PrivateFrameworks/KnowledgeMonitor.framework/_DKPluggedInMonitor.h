/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKPluggedInMonitor : _DKMonitor {
    bool  _enabled;
    int  _pluggedInToken;
}

@property (nonatomic) bool enabled;
@property (nonatomic) int pluggedInToken;

+ (id)_eventWithState:(bool)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsPluggedIn:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (bool)enabled;
- (int)pluggedInToken;
- (void)setEnabled:(bool)arg1;
- (void)setPluggedInToken:(int)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
