/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTextMessagePartChatItem : CKMessagePartChatItem {
    UIItemProvider * _dragItemProvider;
}

@property (nonatomic, readonly) bool containsHyperlink;
@property (nonatomic, readonly, copy) NSAttributedString *subject;
@property (nonatomic, readonly, copy) NSAttributedString *text;

- (void).cxx_destruct;
- (id)_attributedTextWithTextColor:(id)arg1;
- (id)_time;
- (Class)balloonViewClass;
- (id)composition;
- (bool)containsHyperlink;
- (id)dragItemProvider;
- (Class)impactBalloonViewClass;
- (id)loadTranscriptText;
- (id)pasteboardItems;
- (id)sendAnimationText;
- (bool)shouldUseBigEmoji;
- (bool)showMoneyResults;
- (id)subject;
- (id)text;

@end
