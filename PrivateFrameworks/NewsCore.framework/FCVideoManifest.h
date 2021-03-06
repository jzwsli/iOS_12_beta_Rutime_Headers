/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCVideoManifest : NSObject {
    NSString * _articleID;
    NSURL * _videoURL;
}

@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, retain) NSURL *videoURL;

- (void).cxx_destruct;
- (id)articleID;
- (id)init;
- (id)initWithArticleID:(id)arg1 videoURL:(id)arg2;
- (void)setArticleID:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)videoURL;

@end
