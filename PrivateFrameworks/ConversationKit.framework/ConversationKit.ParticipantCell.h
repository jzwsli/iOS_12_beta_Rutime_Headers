/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.ParticipantCell : UICollectionViewCell {
    void accessibilityDisplayName;
    void participantIdentifier;
    void participantView;
}

@property (nonatomic, copy) NSString *accessibilityDisplayName;
@property (nonatomic, readonly) _TtC15ConversationKit15ParticipantView *participantView;

- (id /* block */).cxx_destruct;
- (id)accessibilityDisplayName;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)participantView;
- (void)prepareForReuse;
- (void)setAccessibilityDisplayName:(id)arg1;

@end
