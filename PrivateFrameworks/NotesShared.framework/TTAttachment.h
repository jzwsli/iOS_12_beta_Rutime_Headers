/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTAttachment : NSObject <TTAttachment> {
    NSString * _attachmentIdentifier;
    NSString * _attachmentUTI;
}

@property (nonatomic, retain) NSString *attachmentIdentifier;
@property (nonatomic, retain) NSString *attachmentUTI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long embeddingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (bool)isAttachment:(id)arg1 equalToModelComparable:(id)arg2;

- (void).cxx_destruct;
- (id)attachmentIdentifier;
- (id)attachmentInContext:(id)arg1;
- (id)attachmentUTI;
- (bool)isEqualToModelComparable:(id)arg1;
- (void)setAttachmentIdentifier:(id)arg1;
- (void)setAttachmentUTI:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (long long)embeddingType;

@end
