/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSwipeGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _startLocation;
    double  _startTime;
    long long  _swipeDirection;
    UITouch * _trackingTouch;
}

@property (nonatomic, readonly) long long swipeDirection;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (long long)swipeDirection;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
