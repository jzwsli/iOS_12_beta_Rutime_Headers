/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceInfo : NSObject <NSCopying> {
    NSString * _digestString;
    TSUColor * _fallbackColor;
    NSString * _fileExtension;
    unsigned long long  _fileSize;
    NSString * _locator;
    NSSet * _tags;
}

@property (nonatomic, readonly, copy) NSString *digestString;
@property (nonatomic, readonly, copy) TSUColor *fallbackColor;
@property (nonatomic, readonly, copy) NSString *fileExtension;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly, copy) NSString *locator;
@property (nonatomic, readonly, copy) NSSet *tags;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)digestString;
- (id)fallbackColor;
- (id)fileExtension;
- (unsigned long long)fileSize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDigestString:(id)arg1 locator:(id)arg2 fileExtension:(id)arg3 fileSize:(unsigned long long)arg4 tags:(id)arg5 fallbackColor:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDocumentResourceInfo:(id)arg1;
- (id)locator;
- (id)tags;

@end
