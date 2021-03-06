/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABDebugPanelExperimentBranch : PBCodable <NSCopying> {
    NSString * _branchLabel;
    NSString * _branchName;
    NSString * _experimentId;
    NSString * _experimentName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *branchLabel;
@property (nonatomic, retain) NSString *branchName;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic, retain) NSString *experimentName;
@property (nonatomic, readonly) bool hasBranchLabel;
@property (nonatomic, readonly) bool hasBranchName;
@property (nonatomic, readonly) bool hasExperimentId;
@property (nonatomic, readonly) bool hasExperimentName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)branchLabel;
- (id)branchName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (id)experimentName;
- (bool)hasBranchLabel;
- (bool)hasBranchName;
- (bool)hasExperimentId;
- (bool)hasExperimentName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBranchLabel:(id)arg1;
- (void)setBranchName:(id)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setExperimentName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
