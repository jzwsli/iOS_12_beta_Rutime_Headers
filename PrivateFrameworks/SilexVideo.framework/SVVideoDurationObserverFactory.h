/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoDurationObserverFactory : NSObject <SVVideoDurationObserverFactory> {
    <SVPlayerItemObserverFactory> * _playerItemObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerItemObserverFactory> *playerItemObserverFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createDurationObserverForVideo:(id)arg1;
- (id)initWithPlayerItemObserverFactory:(id)arg1;
- (id)playerItemObserverFactory;

@end
