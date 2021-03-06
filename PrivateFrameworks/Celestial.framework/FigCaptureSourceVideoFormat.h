/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat {
    NSArray * _frontEndScalerCompanionFormats;
    bool  _isExternalFormat;
    bool  _isMultiStreamFormat;
    bool  _isStillImageDepthSupported;
    bool  _isStillImageDisparitySupported;
    bool  _isStreamingDepthSupported;
    bool  _isStreamingDisparitySupported;
    FigCaptureSourceCompanionFormat * _option3;
    FigCaptureSourceCompanionFormat * _option4;
    NSArray * _supportedDepthDataFormats;
}

@property (readonly) NSArray *AVCaptureSessionPresets;
@property (readonly) int autoFocusSystem;
@property (getter=isBinned, readonly) bool binned;
@property (readonly) float defaultMaxFrameRate;
@property (readonly) float defaultMinFrameRate;
@property (readonly) struct { int x1; int x2; } dimensions;
@property (getter=isExternalFormat, readonly) bool externalFormat;
@property (readonly) float fieldOfView;
@property (readonly) int formatIndex;
@property (readonly) bool hasSensorHDRCompanionIndex;
@property (getter=isHDRSupported, readonly) bool hdrSupported;
@property (getter=isHighProfileH264Supported, readonly) bool highProfileH264Supported;
@property (getter=isHighResPhotoFormat, readonly) bool highResPhotoFormat;
@property (readonly) struct { int x1; int x2; } highResStillImageDimensions;
@property (getter=isHighResStillImageSupported, readonly) bool highResStillImageSupported;
@property (getter=isIrisSupported, readonly) bool irisSupported;
@property (getter=isIrisVideoStabilizationSupported, readonly) bool irisVideoStabilizationSupported;
@property (getter=isISPMultiBandNoiseReductionSupported, readonly) bool ispMultiBandNoiseReductionSupported;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property (readonly) float maxISO;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) float maxZoomFactor;
@property (readonly) float maxZoomFactorForDepthDataDelivery;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property (readonly) float minISO;
@property (readonly) float minSupportedFrameRate;
@property (readonly) float minZoomFactorForDepthDataDelivery;
@property (readonly) bool needsPreviewDPCC;
@property (getter=isPhotoFormat, readonly) bool photoFormat;
@property (readonly) bool prefersSensorHDREnabled;
@property (getter=isQuadraHighResStillImageSupported, readonly) bool quadraHighResStillImageSupported;
@property (readonly) int rawBitDepth;
@property (readonly) struct { int x1; int x2; } sensorDimensions;
@property (getter=isStagePreviewRenderingSupported, readonly) bool stagePreviewRenderingSupported;
@property (getter=isStereoFusionSupported, readonly) bool stereoFusionSupported;
@property (getter=isStillImageDepthSupported, readonly) bool stillImageDepthSupported;
@property (getter=isStillImageDisparitySupported, readonly) bool stillImageDisparitySupported;
@property (getter=isStillImageISPMultiBandNoiseReductionSupported, readonly) bool stillImageISPMultiBandNoiseReductionSupported;
@property (getter=isStillImageStabilizationSupported, readonly) bool stillImageStabilizationSupported;
@property (getter=isStreamingDepthSupported, readonly) bool streamingDepthSupported;
@property (getter=isStreamingDisparitySupported, readonly) bool streamingDisparitySupported;
@property (getter=isStudioAndContourPreviewRenderingSupported, readonly) bool studioAndContourPreviewRenderingSupported;
@property (readonly) NSArray *supportedColorSpaces;
@property (readonly) NSArray *supportedDepthDataFormats;
@property (readonly) unsigned int supportedRawPixelFormat;
@property (readonly) int timeMachineCapacity;
@property (getter=isWideColorSupported, readonly) bool wideColorSupported;
@property (readonly) bool zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
@property (getter=isZeroShutterLagSupported, readonly) bool zeroShutterLagSupported;
@property (readonly) int zeroShutterLagTimeMachineCapacity;
@property (getter=isZoomDynamicSensorCropSupported, readonly) bool zoomDynamicSensorCropSupported;
@property (readonly) float zoomFactorUpscaleThreshold;
@property (getter=isZoomSupported, readonly) bool zoomSupported;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)AVCaptureSessionPresets;
- (struct { int x1; int x2; })_highQualitySensorDimensions;
- (struct { int x1; int x2; })_maxUseableSensorDimensions;
- (struct { int x1; int x2; })_outputDimensions;
- (void)_resolveProperties;
- (struct { int x1; int x2; })_visibleSensorDimensionsIncludingCinematic:(bool)arg1;
- (float)aeMaxGain;
- (int)autoFocusSystem;
- (bool)capturesStillsFromVideoStream;
- (id)copyWithNewPixelFormat:(unsigned int)arg1;
- (struct { int x1; int x2; })cropDimensionsForFES;
- (void)dealloc;
- (float)defaultMaxFrameRate;
- (float)defaultMinFrameRate;
- (struct { int x1; int x2; })dimensions;
- (int)fesBinningFactorHorizontal;
- (int)fesBinningFactorVertical;
- (float)fieldOfView;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (int)formatIndex;
- (id)frontEndScalerCompanionFormats;
- (bool)hasSensorHDRCompanionIndex;
- (struct { int x1; int x2; })highResStillImageDimensions;
- (int)horizontalSensorBinningFactor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBinned;
- (bool)isCompatibleWithInfraredFormat:(id)arg1;
- (bool)isExternalFormat;
- (bool)isHDRSupported;
- (bool)isHighProfileH264Supported;
- (bool)isHighResPhotoFormat;
- (bool)isHighResStillImageSupported;
- (bool)isISPMultiBandNoiseReductionSupported;
- (bool)isIrisSupported;
- (bool)isIrisVideoStabilizationSupported;
- (bool)isMultiStreamFormat;
- (bool)isPhotoFormat;
- (bool)isQuadraHighResStillImageSupported;
- (bool)isStabilizationModeSupported:(int)arg1;
- (bool)isStagePreviewRenderingSupported;
- (bool)isStereoFusionSupported;
- (bool)isStillImageDepthSupported;
- (bool)isStillImageDisparitySupported;
- (bool)isStillImageISPChromaNoiseReductionEnabled;
- (bool)isStillImageISPMultiBandNoiseReductionSupported;
- (bool)isStillImageStabilizationSupported;
- (bool)isStreamingDepthSupported;
- (bool)isStreamingDisparitySupported;
- (bool)isStudioAndContourPreviewRenderingSupported;
- (bool)isValidDerivedBravoFormatForUnderlyingFormat:(id)arg1;
- (bool)isWideColorSupported;
- (bool)isZeroShutterLagSupported;
- (bool)isZoomDynamicSensorCropSupported;
- (bool)isZoomSupported;
- (bool)ispChromaNoiseReductionEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (int)maxIntegrationTimeOverride;
- (float)maxSupportedFrameRate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxVisibleSensorRect;
- (float)maxZoomFactor;
- (float)maxZoomFactorForDepthDataDelivery;
- (unsigned int)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (float)minSupportedFrameRate;
- (float)minZoomFactorForDepthDataDelivery;
- (bool)needsPreviewDPCC;
- (id)option3;
- (id)option4;
- (struct { int x1; int x2; })preferredPreviewDimensions;
- (bool)prefersSensorHDREnabled;
- (int)previewImageQueueSyncStrategy;
- (int)rawBitDepth;
- (id)rawLensShadingCorrection;
- (struct { int x1; int x2; })sensorCropDimensions;
- (struct { int x1; int x2; })sensorDimensions;
- (int)sensorHDRCompanionIndex;
- (struct { int x1; int x2; })sourceCropAspectRatio;
- (struct CGSize { double x1; double x2; })stabilizationOverscanPercentageFromSensor;
- (float)stabilizationOverscanPercentageOverrideForCinematic;
- (int)stabilizationTypeOverrideForCinematic;
- (int)stabilizationTypeOverrideForStandard;
- (int)stillImageNoiseReductionAndStabilizationScheme;
- (id)supportedColorSpaces;
- (id)supportedDepthDataFormats;
- (unsigned int)supportedRawPixelFormat;
- (int)temporalNoiseReductionMode;
- (int)timeMachineCapacity;
- (int)verticalSensorBinningFactor;
- (bool)zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
- (int)zeroShutterLagTimeMachineCapacity;
- (float)zoomFactorUpscaleThreshold;

@end
