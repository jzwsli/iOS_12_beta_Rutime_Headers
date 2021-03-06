/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCExcerptURLProtocol : NSURLProtocol {
    FCCKContentFetchOperation * _fetchOperation;
}

@property (nonatomic, retain) FCCKContentFetchOperation *fetchOperation;

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)excerptURLForArticleID:(id)arg1 changeTag:(id)arg2;
+ (void)initialize;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (void)setupWithArticleDatabase:(id)arg1;
+ (void)unregister;

- (void).cxx_destruct;
- (id)fetchOperation;
- (void)setFetchOperation:(id)arg1;
- (void)startLoading;
- (void)stopLoading;

@end
