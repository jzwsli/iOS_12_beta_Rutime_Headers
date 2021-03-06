/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKImageElement : IKViewElement {
    double  _aspectRatio;
    unsigned long long  _imageType;
    NSURL * _resolvedURL;
    double  _srcHeight;
    double  _srcWidth;
    NSDictionary * _srcset;
    NSArray * _srcsetRules;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) long long fill;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) unsigned long long imageType;
@property (nonatomic, readonly, retain) NSURL *placeholderURL;
@property (nonatomic, readonly) unsigned long long position;
@property (nonatomic, readonly) long long reflect;
@property (nonatomic, retain) NSURL *resolvedURL;
@property (nonatomic, readonly, retain) NSDictionary *srcset;
@property (nonatomic, retain) NSArray *srcsetRules;
@property (nonatomic, readonly) TVImageProxy *tv_imageProxy;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } tv_imageScaleToSize;
@property (nonatomic, readonly) long long tv_imageType;
@property (nonatomic, readonly) bool tv_isResource;
@property (nonatomic, readonly) UIImage *tv_resourceImage;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) double width;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (unsigned long long)_imageTypeForTagName:(id)arg1;
- (void)_parseSrcset:(id)arg1;
- (void)appDocumentDidMarkStylesDirty;
- (double)aspectRatio;
- (id)borderColor;
- (long long)fill;
- (double)height;
- (unsigned long long)imageType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)placeholderURL;
- (unsigned long long)position;
- (long long)reflect;
- (id)resolvedURL;
- (void)setResolvedURL:(id)arg1;
- (void)setSrcsetRules:(id)arg1;
- (id)srcset;
- (id)srcsetRules;
- (id)url;
- (double)width;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (void)_imageProxy:(id*)arg1 andScaleToSize:(struct CGSize { double x1; double x2; }*)arg2;
- (id)tv_associatedViewElement;
- (id)tv_imageProxy;
- (struct CGSize { double x1; double x2; })tv_imageScaleToSize;
- (long long)tv_imageType;
- (bool)tv_isResource;
- (id)tv_resourceImage;

// Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras

- (long long)accessoryType;
- (id)artworkCatalog;
- (id)bestURL;
- (id)cachePath;
- (id)resourceImage;

@end
