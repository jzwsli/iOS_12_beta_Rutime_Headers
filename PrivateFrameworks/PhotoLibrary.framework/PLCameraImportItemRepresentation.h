/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraImportItemRepresentation : NSObject {
    ICCameraFile * _cameraFile;
    bool  _canRequestMetadata;
    bool  _canRequestThumbnail;
    NSString * _fileExtension;
    bool  _inLibrary;
    bool  _isRender;
    NSDictionary * _metadata;
    NSString * _name;
    NSString * _path;
    UIImage * _thumbnail;
}

@property (nonatomic, readonly) ICCameraFile *cameraFile;
@property (nonatomic) bool canRequestMetadata;
@property (nonatomic) bool canRequestThumbnail;
@property (nonatomic, readonly, copy) NSString *fileExtension;
@property (nonatomic, readonly) bool isAudio;
@property (nonatomic, readonly) bool isImage;
@property (nonatomic, readonly) bool isMovie;
@property (nonatomic, readonly) bool isRaw;
@property (nonatomic, readonly) bool isRender;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, readonly) UIImage *thumbnail;

+ (id /* block */)_fileTypeComparator;
+ (id /* block */)_originalFirstComparator;
+ (id /* block */)_renderFirstComparator;
+ (id /* block */)importComparator;
+ (id /* block */)itemComparator;

- (void).cxx_destruct;
- (bool)_checkIfIsInLibrary;
- (long long)_fileTypeSortOrder;
- (bool)_utiConformsTo:(struct __CFString { }*)arg1;
- (id)cameraFile;
- (bool)canRequestMetadata;
- (bool)canRequestThumbnail;
- (void)clearThumbnail;
- (id)description;
- (id)fileExtension;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCameraFile:(id)arg1;
- (bool)isAudio;
- (bool)isImage;
- (bool)isInLibraryForce:(bool)arg1;
- (bool)isMovie;
- (bool)isRaw;
- (bool)isRender;
- (void)markAsInDatabase;
- (id)metadata;
- (id)name;
- (id)path;
- (void)requestThumbnail;
- (void)setCanRequestMetadata:(bool)arg1;
- (void)setCanRequestThumbnail:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setThumbnailWithImageRef:(struct CGImage { }*)arg1;
- (id)thumbnail;

@end
