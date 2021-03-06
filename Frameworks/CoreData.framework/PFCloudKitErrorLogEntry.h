/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitErrorLogEntry : NSObject {
    NSString * _annotation;
    NSError * _error;
}

@property (nonatomic, readonly) NSString *annotation;
@property (nonatomic, readonly) NSError *error;

- (id)annotation;
- (void)dealloc;
- (id)error;
- (id)initWithError:(id)arg1 annotation:(id)arg2;

@end
