/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell {
    UIButton * _reportSpamButton;
    bool  _showReportSMSSpam;
}

@property (nonatomic, copy) NSAttributedString *attributedButtonText;
@property (nonatomic, retain) UIButton *reportSpamButton;
@property (nonatomic) bool showReportSMSSpam;

+ (id)reportSpamButton;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (id)attributedButtonText;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (id)reportSpamButton;
- (void)setAttributedButtonText:(id)arg1;
- (void)setReportSpamButton:(id)arg1;
- (void)setShowReportSMSSpam:(bool)arg1;
- (bool)showReportSMSSpam;

@end
