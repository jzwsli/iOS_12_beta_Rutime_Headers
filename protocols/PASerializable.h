/* made by EzioChiu.
 */

@protocol PASerializable <NSObject>

@required

+ (NSString *)classDictionaryKey;
+ (<PASerializable> *)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg2;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg2 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
