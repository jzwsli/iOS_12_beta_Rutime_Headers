/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingViewControllerUpdate : NSObject {
    bool  _canGroup;
    NSArray * _displayAsPickedRoutes;
    NSArray * _displayableAvailableRoutes;
    bool  _hasPendingPickedRoutes;
    NSArray * _pendingPickedRoutes;
    NSArray * _pickedRoutes;
    bool  _shouldReload;
}

@property (nonatomic) bool canGroup;
@property (nonatomic, copy) NSArray *displayAsPickedRoutes;
@property (nonatomic, copy) NSArray *displayableAvailableRoutes;
@property (nonatomic) bool hasPendingPickedRoutes;
@property (nonatomic, copy) NSArray *pendingPickedRoutes;
@property (nonatomic, copy) NSArray *pickedRoutes;
@property (nonatomic) bool shouldReload;

- (void).cxx_destruct;
- (bool)canGroup;
- (id)displayAsPickedRoutes;
- (id)displayableAvailableRoutes;
- (bool)hasPendingPickedRoutes;
- (id)pendingPickedRoutes;
- (id)pickedRoutes;
- (void)setCanGroup:(bool)arg1;
- (void)setDisplayAsPickedRoutes:(id)arg1;
- (void)setDisplayableAvailableRoutes:(id)arg1;
- (void)setHasPendingPickedRoutes:(bool)arg1;
- (void)setPendingPickedRoutes:(id)arg1;
- (void)setPickedRoutes:(id)arg1;
- (void)setShouldReload:(bool)arg1;
- (bool)shouldReload;

@end
