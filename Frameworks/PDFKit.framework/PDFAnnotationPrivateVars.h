/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAnnotationPrivateVars : NSObject {
    NSMutableDictionary * PDFAnnotationDictionary;
    NSDictionary * PDFAnnotationKeyMapping;
    PDFAccessibilityNode * accessibilityNode;
    PDFAKAnnotationAdaptor * akAnnotationAdaptor;
    <NSCopying> * akAnnotationForCopying;
    struct CGPDFAnnotation { } * cgAnnotation;
    struct CGPath {} ** cgPaths;
    bool  constructingDictionaryRef;
    id  control;
    struct __CFDictionary { } * dictionaryRef;
    struct CGPDFForm { } * downAppearance;
    struct CGPDFForm { } * downOffAppearance;
    struct CGPoint { 
        double x; 
        double y; 
    }  endPoint;
    bool  export;
    bool  isFullyConstructed;
    bool  isHighlighted;
    bool  isSelected;
    bool  isSignature;
    bool  loggingEnabled;
    UIColor * mouseHoverBackgroundColor;
    struct CGPDFForm { } * normalAppearance;
    struct CGPDFForm { } * normalOffAppearance;
    PDFPage * page;
    PDFAnnotation * parent;
    NSLock * pathLock;
    NSUUID * pdfAnnotationUUID;
    PDFAnnotation * popup;
    struct CGPDFDictionary { } * popupDictionary;
    bool  popupDrawCloseWidget;
    bool  popupDrawText;
    NSArray * quadPoints;
    bool  restoreLinePoints;
    bool  restoreQuadPoints;
    struct CGPDFForm { } * rolloverAppearance;
    struct CGPDFForm { } * rolloverOffAppearance;
    bool  saveAppearance;
    double  scaleFactor;
    bool  shouldBurnIn;
    struct CGPDFDictionary { } * sourceDictionary;
    struct CGPoint { 
        double x; 
        double y; 
    }  startPoint;
    NSString * widgetOnStateString;
}

- (void).cxx_destruct;

@end
