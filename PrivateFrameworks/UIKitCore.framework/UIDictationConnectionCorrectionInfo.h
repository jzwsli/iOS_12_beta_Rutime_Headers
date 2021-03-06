/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationConnectionCorrectionInfo : NSObject {
    int  _alternativeSelectionCount;
    int  _characterDeletionCount;
    int  _characterInsertionCount;
    int  _characterModificationCount;
    int  _characterSubstitutionCount;
    NSString * _correctedText;
}

@property (nonatomic) int alternativeSelectionCount;
@property (nonatomic) int characterDeletionCount;
@property (nonatomic) int characterInsertionCount;
@property (nonatomic) int characterModificationCount;
@property (nonatomic) int characterSubstitutionCount;
@property (nonatomic, copy) NSString *correctedText;

- (void).cxx_destruct;
- (int)alternativeSelectionCount;
- (int)characterDeletionCount;
- (int)characterInsertionCount;
- (int)characterModificationCount;
- (int)characterSubstitutionCount;
- (id)correctedText;
- (void)setAlternativeSelectionCount:(int)arg1;
- (void)setCharacterDeletionCount:(int)arg1;
- (void)setCharacterInsertionCount:(int)arg1;
- (void)setCharacterModificationCount:(int)arg1;
- (void)setCharacterSubstitutionCount:(int)arg1;
- (void)setCorrectedText:(id)arg1;

@end
