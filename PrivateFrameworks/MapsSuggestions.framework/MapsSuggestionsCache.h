/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsCache : NSObject <MapsSuggestionsObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)loadFromFilePath:(id)arg1 storage:(struct NSMutableDictionary {}**)arg2 ETAValidUntilDate:(id*)arg3;
+ (bool)saveToFilePath:(id)arg1 storage:(struct NSMutableDictionary { Class x1; }*)arg2 ETAValidUntilDate:(id)arg3;

- (struct NSString { Class x1; }*)uniqueName;

@end
