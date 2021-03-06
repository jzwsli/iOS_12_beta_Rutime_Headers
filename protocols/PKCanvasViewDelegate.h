/* made by EzioChiu.
 */

@protocol PKCanvasViewDelegate <NSObject>

@optional

- (void)canvasView:(PKCanvasView *)arg1 drawingDidChange:(PKDrawing *)arg2;
- (void)canvasViewDidBeginNewStroke:(PKCanvasView *)arg1;
- (void)canvasViewDidCancelStroke:(PKCanvasView *)arg1;
- (void)canvasViewDidEndStroke:(PKCanvasView *)arg1;
- (void)canvasViewDrawingDidChange:(PKCanvasView *)arg1;
- (void)canvasViewRenderingDidFinish:(PKCanvasView *)arg1;
- (void)canvasViewWillBeginNewStroke:(PKCanvasView *)arg1 withTouch:(UITouch *)arg2;

@end
