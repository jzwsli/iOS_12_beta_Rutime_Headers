/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKAuthenticatorEvaluationRequest : NSObject {
    NSNumber * _PINLength;
    NSString * _PINTitle;
    struct __SecAccessControl { } * _accessControlRef;
    bool  _assumeUserIntentAvailable;
    NSData * _externalizedContext;
    long long  _policy;
    NSNumber * _processIdentifier;
    NSString * _processName;
    NSString * _reason;
}

@property (nonatomic, copy) NSNumber *PINLength;
@property (nonatomic, copy) NSString *PINTitle;
@property (nonatomic) struct __SecAccessControl { }*accessControlRef;
@property (nonatomic) bool assumeUserIntentAvailable;
@property (nonatomic, retain) NSData *externalizedContext;
@property (nonatomic, readonly) long long policy;
@property (nonatomic, copy) NSNumber *processIdentifier;
@property (nonatomic, copy) NSString *processName;
@property (nonatomic, copy) NSString *reason;

- (void).cxx_destruct;
- (id)PINLength;
- (id)PINTitle;
- (struct __SecAccessControl { }*)accessControlRef;
- (bool)assumeUserIntentAvailable;
- (void)dealloc;
- (id)externalizedContext;
- (id)init;
- (id)initWithPolicy:(long long)arg1;
- (long long)policy;
- (id)processIdentifier;
- (id)processName;
- (id)reason;
- (void)setAccessControlRef:(struct __SecAccessControl { }*)arg1;
- (void)setAssumeUserIntentAvailable:(bool)arg1;
- (void)setExternalizedContext:(id)arg1;
- (void)setPINLength:(id)arg1;
- (void)setPINTitle:(id)arg1;
- (void)setProcessIdentifier:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setReason:(id)arg1;

@end
