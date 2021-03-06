/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface TTZoomController : NSObject {
    double  _checklistZoomFactor;
    double  _zoomFactor;
}

@property (nonatomic) double checklistZoomFactor;
@property (nonatomic) double zoomFactor;

- (double)checklistZoomFactor;
- (id)init;
- (id)reallyZoomAttributedString:(id)arg1 zoomDirection:(bool)arg2;
- (id)reallyZoomAttributes:(id)arg1 zoomDirection:(bool)arg2;
- (id)reallyZoomFontInAttributes:(id)arg1 zoomDirection:(bool)arg2;
- (void)setChecklistZoomFactor:(double)arg1;
- (void)setZoomFactor:(double)arg1;
- (id)unzoomAttributedString:(id)arg1;
- (id)unzoomAttributes:(id)arg1;
- (struct UIFont { Class x1; }*)unzoomFont:(struct UIFont { Class x1; }*)arg1;
- (id)unzoomFontInAttributes:(id)arg1;
- (id)zoomAttributedString:(id)arg1;
- (id)zoomAttributes:(id)arg1;
- (double)zoomFactor;
- (struct UIFont { Class x1; }*)zoomFont:(struct UIFont { Class x1; }*)arg1;
- (id)zoomFontInAttributes:(id)arg1;

@end
