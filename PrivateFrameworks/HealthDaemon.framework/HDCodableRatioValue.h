/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRatioValue : PBCodable <NSCopying> {
    HDCodableCodedQuantity * _denominator;
    HDCodableCodedQuantity * _numerator;
}

@property (nonatomic, retain) HDCodableCodedQuantity *denominator;
@property (nonatomic, readonly) bool hasDenominator;
@property (nonatomic, readonly) bool hasNumerator;
@property (nonatomic, retain) HDCodableCodedQuantity *numerator;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)denominator;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDenominator;
- (bool)hasNumerator;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)numerator;
- (bool)readFrom:(id)arg1;
- (void)setDenominator:(id)arg1;
- (void)setNumerator:(id)arg1;
- (void)writeTo:(id)arg1;

@end
