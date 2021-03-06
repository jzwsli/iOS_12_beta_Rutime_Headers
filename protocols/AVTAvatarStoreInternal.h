/* made by EzioChiu.
 */

@protocol AVTAvatarStoreInternal <AVTAvatarStore>

@required

- (void)deleteAvatarWithIdentifier:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)duplicateAvatar:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 9: AVTAvatarRecord *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, <AVTAvatarRecord> *, NSError *, void*
- (void)saveAvatar:(void *)arg1 completionBlock:(void *)arg2 thumbnailGenerationCompletionBlock:(void *)arg3; // needs 3 arg types, found 15: AVTAvatarRecord *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*, id /* block */, void*, void, id /* block */, bool, NSError *, void*

@end
