/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFImageMetadata : NSObject

+ (id)imagePropertiesByRemovingKey:(const void*)arg1 dictionaryKey:(const void*)arg2 fromImageProperties:(id)arg3;
+ (bool)readMetadataType:(unsigned char)arg1 fromCGImageProperties:(id)arg2 value:(id*)arg3 error:(id*)arg4;
+ (bool)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id*)arg3 error:(id*)arg4;
+ (bool)readMetadataValueFromImageAtFileURL:(id)arg1 dictionaryKey:(const void*)arg2 key:(const void*)arg3 value:(id*)arg4 error:(id*)arg5;
+ (id)valueFromCGImageProperties:(id)arg1 dictionaryKey:(const void*)arg2 key:(const void*)arg3;
+ (bool)writeMetadataType:(unsigned char)arg1 value:(id)arg2 toCGImageProperties:(id)arg3 error:(id*)arg4;

@end
