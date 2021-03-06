/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActivityRestorer : NSObject {
    CNContactStore * _contactStore;
    <CNUIUserActivityRestorerDelegate> * _delegate;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic) <CNUIUserActivityRestorerDelegate> *delegate;

+ (id)log;

- (void).cxx_destruct;
- (id)contactStore;
- (id)delegate;
- (id)initWithContactStore:(id)arg1;
- (bool)restoreUserActivity:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)arg1;

@end
