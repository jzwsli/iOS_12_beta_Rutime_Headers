/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTextItem : PBCodable <NSCopying> {
    NSString * _primaryText;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPrimaryText;
@property (nonatomic, retain) NSString *primaryText;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrimaryText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)primaryText;
- (bool)readFrom:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
