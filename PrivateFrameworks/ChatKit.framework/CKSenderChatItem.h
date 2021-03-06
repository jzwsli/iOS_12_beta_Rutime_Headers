/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSenderChatItem : CKChatItem

- (Class)cellClass;
- (id)cellIdentifier;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (BOOL)transcriptOrientation;
- (bool)wantsDrawerLayout;

@end
