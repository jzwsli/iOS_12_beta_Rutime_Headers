/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArrayQueueFeeder : MPQueueFeeder {
    NSArray * _queueItems;
}

@property (nonatomic, readonly) NSArray *items;

- (void).cxx_destruct;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (id)initWithItems:(id)arg1;
- (unsigned long long)itemCount;
- (id)items;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)playbackInfoForIdentifier:(id)arg1;
- (long long)playbackMode;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end
