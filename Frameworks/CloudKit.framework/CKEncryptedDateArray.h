/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEncryptedDateArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (nonatomic, readonly) NSArray *dateArray;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)dateArray;
- (id)initWithDateArray:(id)arg1;
- (id)value;

@end
