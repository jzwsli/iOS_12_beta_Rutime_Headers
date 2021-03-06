/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditVisualLevelSliderCell : UICollectionViewCell {
    UIImageView * _imageView;
    unsigned long long  _roundedCornersEdge;
    UIImage * _thumbnail;
}

@property (nonatomic) unsigned long long roundedCornersEdge;
@property (nonatomic, retain) UIImage *thumbnail;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (unsigned long long)roundedCornersEdge;
- (void)setRoundedCornersEdge:(unsigned long long)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnail:(id)arg1 animated:(bool)arg2;
- (id)thumbnail;

@end
