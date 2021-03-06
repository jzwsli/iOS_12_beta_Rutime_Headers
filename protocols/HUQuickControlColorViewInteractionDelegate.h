/* made by EzioChiu.
 */

@protocol HUQuickControlColorViewInteractionDelegate <HUQuickControlViewInteractionDelegate>

@required

- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 activeModeDidChange:(unsigned long long)arg2;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 colorPaletteDidChange:(HFColorPalette *)arg2;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;
- (void)hideAuxiliaryViewForControlView:(id <HUQuickControlInteractiveView>)arg1;

@end
