/* made by EzioChiu.
 */

@protocol HACCContentModuleDelegate <NSObject>

@required

- (void)content:(void *)arg1 shouldPreview:(void *)arg2 withController:(void *)arg3 andCompletion:(void *)arg4; // needs 4 arg types, found 8: UIView<HACCContentModule> *, bool, HACCContentViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)controlDidActivate:(UIView<HACCContentModule> *)arg1;
- (AXRemoteHearingAidDevice *)currentHearingDevice;
- (double)preferredContentWidth;
- (bool)shouldDrawBackground;

@end
