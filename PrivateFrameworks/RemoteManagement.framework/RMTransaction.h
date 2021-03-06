/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMTransaction : NSObject {
    double  _creationTime;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (double)creationTime;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)needsMoreTime;
- (id)transaction;

@end
