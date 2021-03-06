/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLFontCache : NSObject {
    FCThreadSafeMutableDictionary * _fontCache;
}

@property (nonatomic, retain) FCThreadSafeMutableDictionary *fontCache;

- (void).cxx_destruct;
- (void)clearCache;
- (id)fontCache;
- (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)init;
- (void)setFontCache:(id)arg1;

@end
