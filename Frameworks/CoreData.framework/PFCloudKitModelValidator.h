/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitModelValidator : NSObject {
    NSString * _configurationName;
    NSManagedObjectModel * _model;
}

+ (id)stringFromDeleteRule:(unsigned long long)arg1;

- (bool)_validateManagedObjectModel:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2;
- (bool)validate:(id*)arg1;
- (bool)validateEntities:(id)arg1 error:(id*)arg2;
- (bool)validateEntity:(id)arg1 hasAttributeNamed:(id)arg2 ofType:(unsigned long long)arg3 andReturnFailureReason:(id*)arg4;

@end
