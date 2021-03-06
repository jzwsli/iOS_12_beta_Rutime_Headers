/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView <TLKDescriptionViewDelegate> {
    bool  _expanded;
}

@property (retain) TLKDescriptionView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void)didPressMoreButton;
- (bool)expanded;
- (void)setExpanded:(bool)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
