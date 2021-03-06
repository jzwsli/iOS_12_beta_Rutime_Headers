/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDFlightPreviewAction : DDRemoteAction {
    NSString * _platerTitle;
    bool  _previewModeSet;
}

@property (retain) NSString *platerTitle;

+ (id)viewControllerProviderClass;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (id)platerTitle;
- (id)platterTitle;
- (id)previewActions;
- (void)setPlaterTitle:(id)arg1;
- (void)setPreviewMode:(bool)arg1;
- (bool)wantsSeamlessCommit;

@end
