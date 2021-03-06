/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView {
    SearchUIWatchListUtilities * _watchListUtility;
}

@property (retain) SearchUIWatchListUtilities *watchListUtility;

- (void).cxx_destruct;
- (void)buttonPressed;
- (id)initIsInUpNext:(bool)arg1 cardSectionView:(id)arg2;
- (void)setWatchListUtility:(id)arg1;
- (void)updateUpNextStatus;
- (id)watchListUtility;

@end
