/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteDestinationStartEndTimeScore : MNCommuteDestinationScore

+ (double)weight;

- (id)descriptionExtras;
- (bool)destinationInvalid;
- (int)score;
- (void)updateScoreIfPossible;

@end
