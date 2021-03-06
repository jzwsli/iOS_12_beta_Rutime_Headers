/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFActivityItemProvider : UIActivityItemProvider {
    NSSet * _excludedActivityTypes;
    NSString * _pageTitle;
    id /* block */  _thumbnailHandler;
    NSURL * _url;
}

@property (nonatomic, copy) NSSet *excludedActivityTypes;
@property (nonatomic, copy) NSString *pageTitle;
@property (nonatomic, copy) id /* block */ thumbnailHandler;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)excludedActivityTypes;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2;
- (id)item;
- (void)main;
- (id)pageTitle;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setPageTitle:(id)arg1;
- (void)setThumbnailHandler:(id /* block */)arg1;
- (void)setUrl:(id)arg1;
- (id /* block */)thumbnailHandler;
- (id)url;

@end
