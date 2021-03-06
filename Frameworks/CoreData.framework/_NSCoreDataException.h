/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSCoreDataException : NSException {
    long long  _code;
    NSString * _domain;
}

+ (id)exceptionWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4;

- (void)_setDomain:(id)arg1;
- (long long)code;
- (void)dealloc;
- (id)domain;
- (id)errorObjectWithUserInfo:(id)arg1;
- (id)initWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;

@end
