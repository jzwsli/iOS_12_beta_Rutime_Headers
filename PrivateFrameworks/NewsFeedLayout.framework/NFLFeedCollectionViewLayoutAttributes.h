/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLFeedCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    long long  _cellType;
    long long  _columnSpan;
    long long  _rowSpan;
}

@property (nonatomic) long long cellType;
@property (nonatomic) long long columnSpan;
@property (nonatomic) long long rowSpan;

- (long long)cellType;
- (long long)columnSpan;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)populateWithProtobuf:(id)arg1;
- (id)protobufRepresentation;
- (long long)rowSpan;
- (void)setCellType:(long long)arg1;
- (void)setColumnSpan:(long long)arg1;
- (void)setRowSpan:(long long)arg1;

@end
