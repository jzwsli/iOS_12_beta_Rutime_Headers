/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitVehicleTime : PBCodable <NSCopying> {
    unsigned int  _absTime;
    struct { 
        unsigned int absTime : 1; 
    }  _has;
}

@property (nonatomic) unsigned int absTime;
@property (nonatomic) bool hasAbsTime;

- (unsigned int)absTime;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbsTime:(unsigned int)arg1;
- (void)setHasAbsTime:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
