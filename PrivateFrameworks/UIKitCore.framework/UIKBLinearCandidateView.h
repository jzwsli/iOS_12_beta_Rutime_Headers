/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView

@property (nonatomic, readonly) UIKBCandidateCollectionView *candidatesCollectionView;

+ (Class)cellClass;

- (unsigned long long)focusableVariantCount;
- (void)refreshSelectedCandidate;
- (void)reloadDataByAppendingAtEnd:(bool)arg1;
- (void)scrollViewDidChangeContentSize:(id)arg1;

@end
