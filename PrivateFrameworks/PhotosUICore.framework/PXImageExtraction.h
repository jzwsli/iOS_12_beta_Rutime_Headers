/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImageExtraction : NSObject {
    bool  _cancelled;
}

@property (getter=isCancelled, setter=_setCancelled:) bool cancelled;

- (void)_setCancelled:(bool)arg1;
- (void)cancel;
- (bool)isCancelled;

@end
