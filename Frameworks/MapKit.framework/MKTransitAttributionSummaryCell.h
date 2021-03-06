/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitAttributionSummaryCell : MKCustomSeparatorTableViewCell {
    _MKUILabel * _attributionLabel;
    NSLayoutConstraint * _bottomConstraint;
    NSLayoutConstraint * _topConstraint;
}

@property (nonatomic, copy) NSString *attributionSummary;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (id)_moreString;
- (void)_updateConstraintValues;
- (id)attributionSummary;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setAttributionSummary:(id)arg1;
- (void)tintColorDidChange;

@end
