/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPowerAssertion : MCProcessAssertion {
    bool  _parked;
}

@property (getter=isParked, nonatomic, readonly) bool parked;

- (void)dealloc;
- (id)init;
- (bool)isParked;
- (void)park;
- (void)unpark;

@end
