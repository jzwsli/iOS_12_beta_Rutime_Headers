/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISingleResultRowModel : NSObject <SearchUIRowModel> {
    SFSearchResult * _result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SFSearchResult *result;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cardSection;
- (id)descriptionText;
- (id)dragAppBundleID;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)identifyingResult;
- (id)initWithResult:(id)arg1;
- (bool)isCalculation;
- (bool)isContact;
- (bool)isDraggable;
- (bool)isSuggestion;
- (bool)isTappable;
- (double)leadingSeparatorImageInset;
- (id)nextCard;
- (id)punchouts;
- (id)result;
- (id)reuseIdentifier;
- (int)separatorStyle;
- (void)setResult:(id)arg1;
- (Class)viewClass;

@end
