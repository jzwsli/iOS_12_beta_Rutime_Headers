/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailComplicationSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailComplicationPickerCellDelegate> {
    <NTKCFaceDetailComplicationSectionDelegate> * _delegate;
    NTKCFaceDetailComplicationPickerCell * _dismissingPickerCell;
    NTKCFaceDetailComplicationPickerCell * _pickerCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailComplicationSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NTKCFaceDetailComplicationPickerCell *dismissingPickerCell;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKCFaceDetailComplicationPickerCell *pickerCell;
@property (nonatomic, retain) NSMutableArray *rows;
@property (readonly) Class superclass;

+ (bool)hasComplicationsForFace:(id)arg1;

- (void).cxx_destruct;
- (void)_addComplication:(id)arg1;
- (bool)_canSelectRow:(long long)arg1;
- (void)_commonInit;
- (void)_dequeuePickerCellForRow:(long long)arg1;
- (void)complicationPickerCell:(id)arg1 didSelectComplication:(id)arg2;
- (id)delegate;
- (void)didSelectRow:(long long)arg1;
- (id)dismissingPickerCell;
- (void)faceDidChange;
- (double)heightForRow:(long long)arg1;
- (id)pickerCell;
- (void)setDelegate:(id)arg1;
- (void)setDismissingPickerCell:(id)arg1;
- (void)setPickerCell:(id)arg1;
- (id)titleForHeader;

@end
