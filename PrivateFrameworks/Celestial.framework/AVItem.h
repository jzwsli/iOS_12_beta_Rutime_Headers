/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItem : NSObject {
    struct AVItemPrivate { id x1; double x2; float x3; float x4; float x5; unsigned long long x6; bool x7; bool x8; id x9; long long x10; long long x11; bool x12; id x13; bool x14; bool x15; id x16; struct OpaqueMD5CheckProgress {} *x17; struct OpaqueFigThread {} *x18; struct OpaqueCMByteStream {} *x19; int x20; id x21; } * _priv;
}

+ (id)avItem;
+ (id)avItemWithPath:(id)arg1 error:(id*)arg2;

- (int)_instantiateItem;
- (id)accessLog;
- (id)attributeForKey:(id)arg1;
- (int)beginDownloading;
- (void)cancelDownload;
- (id)chapterImageForImageID:(long long)arg1;
- (void)dealloc;
- (float)downloadProgress;
- (int)downloadStatus;
- (void*)downloadThread;
- (double)duration;
- (long long)eqPreset;
- (id)errorLog;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(long long)arg3;
- (id)formatDetailsForTracks;
- (id)init;
- (id)initWithError:(id*)arg1;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(bool)arg3 maxCount:(long long)arg4;
- (id)path;
- (bool)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setEQPreset:(long long)arg1;
- (bool)setPath:(id)arg1 error:(id*)arg2;
- (void)setVolume:(float)arg1;
- (void)stopDownload;
- (id)url;
- (id)urlFromPath:(id)arg1;
- (float)volume;

@end
