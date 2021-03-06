/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHASuggestionController : NSObject {
    NSArray * _existingMemories;
    NSMutableArray * _existingSharingSuggestions;
    NSMutableArray * _existingSuggestions;
    PGManager * _graphManager;
}

@property (nonatomic, retain) NSArray *existingMemories;
@property (nonatomic, readonly) NSArray *existingSuggestions;

+ (unsigned long long)_retirementDelayInDaysForSuggestionType:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)collidableMemoriesWithReferenceDate:(id)arg1 andDelay:(double)arg2;
- (id)collidableSuggestionsWithOptions:(id)arg1;
- (id)collidableSuggestionsWithReferenceDate:(id)arg1 andDelay:(double)arg2 sharingSuggestionsOnly:(bool)arg3;
- (id)commitSuggestions:(id)arg1 options:(id)arg2;
- (id)existingMemories;
- (id)existingSuggestions;
- (id)generateSharingSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)generateSingleAssetSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)generateSuggestionsWithProfile:(unsigned char)arg1 options:(id)arg2 progress:(id /* block */)arg3;
- (id)initWithGraphManager:(id)arg1;
- (id)processExistingSuggestions:(id)arg1 atDate:(id)arg2;
- (void)processExistingSuggestionsWithOptions:(id)arg1;
- (void)setExistingMemories:(id)arg1;
- (bool)shouldDeleteSuggestion:(id)arg1 atDate:(id)arg2;
- (bool)shouldRetireSuggestion:(id)arg1 atDate:(id)arg2;

@end
