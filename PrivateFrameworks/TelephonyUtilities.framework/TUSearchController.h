/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSearchController : NSObject {
    CNContactStore * _contactStore;
    NSMutableArray * _recentsModules;
    NSMutableArray * _searchModules;
    NSObject<OS_dispatch_queue> * _searchQueue;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSMutableArray *recentsModules;
@property (nonatomic, retain) NSMutableArray *searchModules;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *searchQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cancelSearches;
- (bool)_searchIsRunning;
- (id /* block */)_searchModuleCompletionWithModules:(id)arg1 searchTerm:(id)arg2 resultsClass:(Class)arg3 completion:(id /* block */)arg4;
- (id)contactStore;
- (id)init;
- (id /* block */)recentsModuleCompletionWithCompletion:(id /* block */)arg1;
- (id)recentsModules;
- (void)recentsWithCompletion:(id /* block */)arg1;
- (void)searchForString:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)searchModuleCompletionWithSearchTerm:(id)arg1 completion:(id /* block */)arg2;
- (id)searchModules;
- (id)searchQueue;
- (void)setContactStore:(id)arg1;
- (void)setRecentsModules:(id)arg1;
- (void)setSearchModules:(id)arg1;
- (void)setSearchQueue:(id)arg1;

@end
