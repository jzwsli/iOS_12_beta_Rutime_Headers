/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ClipChangeLog : NSObject {
    NSMutableDictionary * m_capturedClipContents;
    KonaClip * m_clip;
}

- (void)dealloc;
- (id)description;
- (id)initWithClip:(id)arg1 project:(id)arg2;
- (void)restoreClipInProject:(id)arg1;

@end
