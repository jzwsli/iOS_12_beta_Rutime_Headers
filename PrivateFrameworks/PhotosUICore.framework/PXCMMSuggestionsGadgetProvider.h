/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSuggestionsGadgetProvider : PXGadgetProvider <PXCMMWorkflowCoordinatorDelegate, PXChangeObserver, PXSectionedDataSourceManagerObserver> {
    UIColor * _backgroundColor;
    PXCMMSuggestionsDataSource * _dataSource;
    PXCMMSuggestionsDataSourceManager * _dataSourceManager;
    bool  _didGenerateGadgets;
    <PXGadgetNavigating> * _gadgetNavigator;
    PXCMMWorkflowCoordinator * _workflowCoordinator;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) PXCMMSuggestionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXGadgetNavigating> *gadgetNavigator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (id)_newGadgetForSuggestion:(id)arg1;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;
- (id)backgroundColor;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)gadgetNavigator;
- (void)generateGadgets;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)presentSuggestionGadget:(id)arg1 context:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setGadgetNavigator:(id)arg1;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishWithActivityState:(unsigned long long)arg3;

@end
