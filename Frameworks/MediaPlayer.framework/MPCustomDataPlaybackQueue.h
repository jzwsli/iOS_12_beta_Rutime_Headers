/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *identifier;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (id)data;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)getPlaybackContextWithCompletion:(id /* block */)arg1;

@end
