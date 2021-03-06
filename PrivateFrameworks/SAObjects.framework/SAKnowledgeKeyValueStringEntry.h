/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAKnowledgeKeyValueStringEntry : SAKnowledgeKeyValueEntry

@property (nonatomic, copy) NSString *value;

+ (id)keyValueStringEntry;
+ (id)keyValueStringEntryWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setValue:(id)arg1;
- (id)value;

@end
