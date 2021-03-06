/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    unsigned short  _dataSourceType;
}

@property (nonatomic, readonly) PXSuggestionsDataSource *dataSource;
@property (nonatomic, readonly) unsigned short dataSourceType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_handleChangeWithDetails:(id)arg1;
- (id)createInitialDataSource;
- (unsigned short)dataSourceType;
- (id)init;
- (id)initWithDataSourceType:(unsigned short)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end
