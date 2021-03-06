/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAudioCodecConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    HMDAudioCodecParameters * _audioCodecParameters;
    HMDAudioCodecGroup * _codecGroup;
}

@property (nonatomic, readonly, copy) HMDAudioCodecParameters *audioCodecParameters;
@property (nonatomic, readonly, copy) HMDAudioCodecGroup *codecGroup;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)audioCodecParameters;
- (id)codecGroup;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAudioCodecGroup:(id)arg1 codecParameter:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)tlvData;

@end
