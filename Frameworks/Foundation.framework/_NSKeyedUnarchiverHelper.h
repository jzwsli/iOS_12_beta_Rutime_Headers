/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSKeyedUnarchiverHelper : NSObject {
    NSMutableArray * _allowedClasses;
    NSError * _decodeError;
    unsigned int  _lastRef;
    NSArray * _white;
}

@property (copy) NSError *decodeError;

- (id)allowedClassNames;
- (bool)classNameAllowed:(Class)arg1;
- (void)dealloc;
- (id)decodeError;
- (id)init;
- (void)setAllowedClassNames:(id)arg1;
- (void)setDecodeError:(id)arg1;

@end
