/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVTimeMarkerObservation : NSObject {
    id  _context;
    int  _currentIndex;
    id  _observer;
    NSArray * _times;
}

- (id)context;
- (int)currentIndex;
- (void)dealloc;
- (bool)gotoTime:(double)arg1;
- (id)initWithObserver:(id)arg1 times:(id)arg2 context:(id)arg3 currentIndex:(int)arg4;
- (double)nextInterestingTime;
- (id)observer;
- (double)prevInterestingTime;

@end
