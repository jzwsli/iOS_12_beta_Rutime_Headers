/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTrackCountInformation : NSObject {
    bool  _libraryFallback;
    unsigned long long  _trackCount;
}

@property (getter=isLibraryFallback, nonatomic) bool libraryFallback;
@property (nonatomic) unsigned long long trackCount;

- (bool)isLibraryFallback;
- (void)setLibraryFallback:(bool)arg1;
- (void)setTrackCount:(unsigned long long)arg1;
- (unsigned long long)trackCount;

@end
