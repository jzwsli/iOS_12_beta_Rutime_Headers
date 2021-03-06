/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSubscriptionLeaseFairPlayStatusUpdateOperation : MPAsyncOperation {
    unsigned long long  _endReasonType;
}

@property (nonatomic) unsigned long long endReasonType;

- (unsigned long long)endReasonType;
- (void)execute;
- (void)setEndReasonType:(unsigned long long)arg1;

@end
