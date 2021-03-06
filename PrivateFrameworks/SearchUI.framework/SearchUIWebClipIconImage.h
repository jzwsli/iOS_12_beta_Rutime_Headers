/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIWebClipIconImage : SearchUIAppIconImage {
    UIWebClip * _webClip;
}

@property (retain) UIWebClip *webClip;

- (void).cxx_destruct;
- (id)generateImageWithFormat:(int)arg1;
- (id)initWithWebClip:(id)arg1 variant:(unsigned long long)arg2;
- (void)setWebClip:(id)arg1;
- (id)webClip;

@end
