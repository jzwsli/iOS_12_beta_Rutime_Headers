/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MBClipsLoader : NSObject {
    NSMutableArray * _clips;
    bool  _loading;
    NSArray * _previousClips;
    bool  _showOnlyFavorites;
}

@property (retain) NSMutableArray *clips;
@property (getter=isLoading, nonatomic) bool loading;
@property (retain) NSArray *previousClips;
@property (nonatomic) bool showOnlyFavorites;

- (void).cxx_destruct;
- (id)clips;
- (id)initWithShowOnlyFavorites:(bool)arg1;
- (bool)isLoading;
- (void)load;
- (id)previousClips;
- (void)setClips:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setPreviousClips:(id)arg1;
- (void)setShowOnlyFavorites:(bool)arg1;
- (bool)showOnlyFavorites;
- (void)startLoading;
- (void)stopLoading;

@end
