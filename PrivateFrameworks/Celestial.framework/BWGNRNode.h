/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWGNRNode : BWNode {
    bool  _allowedToModifyInputBuffers;
    BWNodeOutput * _bravoHDRDisparityOutput;
    bool  _clientExpectsPreBracketFrame;
    struct opaqueCMSampleBuffer { } * _collectedUnprocessedPreBracketHDR;
    int (* _createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    unsigned int  _expectedFrameCount;
    bool  _expectsPreBracketFrame;
    int  _gnrFusionReferenceFrameBracketedCaptureSequenceNumber;
    int  _hdrDisparityBracketedCaptureSequenceNumber;
    bool  _hdrEnabled;
    <BWStillImageProcessingStatusDelegate> * _hdrReferenceFrameSelectionDelegate;
    NSMutableDictionary * _inputAttachedMedia;
    bool  _ltmHDREnabled;
    bool  _oisEnabled;
    NSString * _portType;
    NSMutableDictionary * _presentationTimeStampsForInputFrames;
    long long  _previouslyCompletedFusionSettingsID;
    bool  _processingHDREV0BracketFrame;
    int  _processingType;
    bool  _receivedAllFrames;
    unsigned int  _receivedFrameCount;
    bool  _receivedPreBracketFrame;
    int  _receivedReferenceFrameBracketedCaptureSequenceNumber;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSString * _sensorID;
    NSDictionary * _sensorIDDictionary;
    bool  _sisEnabled;
    FigCapturePixelConverter * _stereoFusedGNRHDRPixelConverter;
    NSString * _telephotoPortType;
    NSString * _telephotoSensorID;
    NSDictionary * _telephotoSensorIDDictionary;
    bool  _usesHDRPreBracketFrameForErrorRecoveryDownstream;
}

@property (nonatomic, readonly) BWNodeOutput *bravoHDRDisparityOutput;

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (struct opaqueCMSampleBuffer { }*)_copyAndZoomSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingNormalizedZoomRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_detectMissingPreBracketedFrameAndEmitBWNodeError;
- (int)_gnrProcessingTypeWithMetadataDictionary:(id)arg1;
- (void)_handleSBPReferenceFrame:(int)arg1;
- (id)_initWithSISEnabled:(bool)arg1 OISEnabled:(bool)arg2 HDREnabled:(bool)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 telephotoPortType:(id)arg7 telephotoSensorID:(id)arg8 telephotoSensorIDDictionary:(id)arg9 sbpCreationFunction:(int (*)arg10 treatSoftErrorsAsHardErrors:(bool)arg11;
- (bool)_isBravoDepthDataCapture;
- (bool)_isBravoHDRDepthDataCapture;
- (bool)_isBravoTelephotoHDRDepthDataCapture;
- (id)_outputForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 bufferRepresentsHDRFusedImage:(bool)arg2;
- (void)_processSequenceInSampleBufferProcessor;
- (bool)_receivedExpectedAmountOfFrames;
- (void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)_setExpectedFrameCountForPortType:(id)arg1;
- (int)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)_setReferenceFrameBracketedCaptureSequenceNumberOnSampleBufferProcessor:(int)arg1;
- (int)_setupSampleBufferProcessor;
- (id)_tuningDictionaryWithOnlyGNRParameters;
- (unsigned int)_worstCaseFrameRetainCount;
- (bool)allowedToModifyInputBuffers;
- (bool)attachesInputBracketToOutputSampleBuffer;
- (id)bravoHDRDisparityOutput;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)hdrReferenceFrameSelectionDelegate;
- (id)initWithSISEnabled:(bool)arg1 OISEnabled:(bool)arg2 HDREnabled:(bool)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 telephotoPortType:(id)arg7 telephotoSensorID:(id)arg8 telephotoSensorIDDictionary:(id)arg9;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sbpOptionsDictionary;
- (void)setAllowedToModifyInputBuffers:(bool)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (void)setHdrReferenceFrameSelectionDelegate:(id)arg1;
- (void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(bool)arg1;
- (bool)usesHDRPreBracketFrameForErrorRecoveryDownstream;

@end
