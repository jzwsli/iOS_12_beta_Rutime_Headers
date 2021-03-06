/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMessagesRecentPhotosGadget : NSObject <PXGadget> {
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    double  _preferredHeight;
    unsigned long long  _priority;
    UIViewController<PXPhotoLibraryPresenting> * _recentPhotosViewController;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) double preferredHeight;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (void)_updateViewControllerInsets;
- (id)accessoryButtonTitle;
- (unsigned long long)accessoryButtonType;
- (struct NSObject { Class x1; }*)contentViewController;
- (id)delegate;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (bool)hasLoadedContentData;
- (unsigned long long)headerStyle;
- (void)loadContentData;
- (id)localizedTitle;
- (double)preferredHeight;
- (unsigned long long)priority;
- (id)recentPhotosViewController;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRecentPhotosViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)userDidSelectAccessoryButton:(id)arg1;

@end
