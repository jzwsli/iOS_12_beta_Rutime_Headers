/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRecentRecipientSuggester : NSObject {
    CNContactStore * _contactStore;
    unsigned long long  _maxNumberOfPeopleSuggested;
    long long  _modelType;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (nonatomic) unsigned long long maxNumberOfPeopleSuggested;
@property (nonatomic) long long modelType;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)maxNumberOfPeopleSuggested;
- (long long)modelType;
- (void)requestRecipientSuggestionsWithResultHandler:(id /* block */)arg1;
- (void)setMaxNumberOfPeopleSuggested:(unsigned long long)arg1;
- (void)setModelType:(long long)arg1;

@end
