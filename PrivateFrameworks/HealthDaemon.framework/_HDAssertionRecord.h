/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAssertionRecord : NSObject {
    NSString * _assertionIdentifier;
    NSHashTable * _assertions;
}

@property (nonatomic, readonly, copy) NSString *assertionIdentifier;
@property (nonatomic, readonly) NSHashTable *assertions;

- (void).cxx_destruct;
- (id)assertionIdentifier;
- (id)assertions;
- (id)initWithAssertionIdentifier:(id)arg1;

@end
