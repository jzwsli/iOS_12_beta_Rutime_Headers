/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareLibraryLookupResult : NSObject {
    NSSet * _matchedLibraryItems;
    NSSet * _unmatchedAccessories;
}

@property (nonatomic, retain) NSSet *matchedLibraryItems;
@property (nonatomic, retain) NSSet *unmatchedAccessories;

- (void).cxx_destruct;
- (id)matchedLibraryItems;
- (void)setMatchedLibraryItems:(id)arg1;
- (void)setUnmatchedAccessories:(id)arg1;
- (id)unmatchedAccessories;

@end
