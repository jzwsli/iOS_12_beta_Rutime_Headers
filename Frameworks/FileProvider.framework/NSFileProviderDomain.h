/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface NSFileProviderDomain : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _identifier;
    NSString * _pathRelativeToDocumentStorage;
}

@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *pathRelativeToDocumentStorage;

+ (id)domainFromPlistDictionary:(id)arg1 identifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 pathRelativeToDocumentStorage:(id)arg3;
- (id)pathRelativeToDocumentStorage;
- (id)plistDictionary;

@end
