/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPropertyListRepresentationAttachmentsBuilder : NSObject {
    NSMutableDictionary * _mutableAttachments;
}

@property (nonatomic, readonly, copy) NSDictionary *attachments;
@property (nonatomic, readonly, copy) NSMutableDictionary *mutableAttachments;

- (void).cxx_destruct;
- (void)addAttachmentWithToken:(id)arg1 extension:(id)arg2 category:(id)arg3 data:(id)arg4;
- (id)attachments;
- (id)init;
- (id)mutableAttachments;

@end
