/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAnalyticsSubmissionCoordinator : NSObject {
    HDDaemon * _daemon;
}

- (void).cxx_destruct;
- (id)initWithDaemon:(id)arg1;
- (void)submitEvent:(id)arg1;

@end
