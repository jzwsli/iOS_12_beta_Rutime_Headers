/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKAggdStatistics : NSObject

+ (id)buildAggdKey:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;
+ (void)clearScalarValuesForLanguage:(id)arg1;
+ (void)decrementAggdKeyForCategory:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;
+ (void)incrementAggdKeyForCategory:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;

@end
