/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface FaceLandmarks : NSObject {
    Polyline * _eyebrowLeftTopLine;
    Polyline * _eyebrowRightTopLine;
    ComputedFaceData * _faceData;
    struct CGPath { } * _headPerimeter;
    PolylinePair * _headPerimeterLinePair;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageRect;
    PolylinePair * _leftEyePair;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftToRightVec;
    Polyline * _mouthBottomLine;
    PolylinePair * _mouthPerimeterLinePair;
    Polyline * _mouthTopLine;
    PolylinePair * _nosePair;
    struct CGPath { } * _noseTipPerimeterPath;
    PolylinePair * _rightEyePair;
    PolylinePair * _teethPair;
    struct CGPoint { 
        double x; 
        double y; 
    }  _upVec;
    struct CGPoint { 
        double x; 
        double y; 
    }  bottomFace;
    struct CGPoint { 
        double x; 
        double y; 
    }  eyebrowLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  eyebrowRight;
    float  iOD;
    struct CGPoint { 
        double x; 
        double y; 
    }  leftEye;
    struct CGPoint { 
        double x; 
        double y; 
    }  leftEyeLowerR2L;
    struct CGPoint { 
        double x; 
        double y; 
    }  leftEyeUpper;
    struct CGPoint { 
        double x; 
        double y; 
    }  leftSideFace;
    struct CGPoint { 
        double x; 
        double y; 
    }  leftTopFace;
    struct CGPoint { 
        double x; 
        double y; 
    }  lowerLipTop;
    struct CGPoint { 
        double x; 
        double y; 
    }  mouthBottom;
    struct CGPoint { 
        double x; 
        double y; 
    }  mouthTop;
    struct CGPoint { 
        double x; 
        double y; 
    }  noseCenterline;
    struct CGPoint { 
        double x; 
        double y; 
    }  noseLeftSide;
    struct CGPoint { 
        double x; 
        double y; 
    }  noseOutline;
    struct CGPoint { 
        double x; 
        double y; 
    }  noseRightSide;
    struct CGPoint { 
        double x; 
        double y; 
    }  noseTip;
    float  polylineDelta;
    struct CGPoint { 
        double x; 
        double y; 
    }  rightEye;
    struct CGPoint { 
        double x; 
        double y; 
    }  rightEyeLowerR2L;
    struct CGPoint { 
        double x; 
        double y; 
    }  rightEyeUpper;
    struct CGPoint { 
        double x; 
        double y; 
    }  rightSideFace;
    struct CGPoint { 
        double x; 
        double y; 
    }  rightTopFace;
    struct CGPoint { 
        double x; 
        double y; 
    }  topFace;
    struct CGPoint { 
        double x; 
        double y; 
    }  upperLipBottom;
}

@property (retain) Polyline *eyebrowLeftTopLine;
@property (retain) Polyline *eyebrowRightTopLine;
@property (retain) ComputedFaceData *faceData;
@property struct CGPath { }*headPerimeter;
@property (retain) PolylinePair *headPerimeterLinePair;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageRect;
@property (retain) PolylinePair *leftEyePair;
@property struct CGPoint { double x1; double x2; } leftToRightVec;
@property (retain) Polyline *mouthBottomLine;
@property (retain) PolylinePair *mouthPerimeterLinePair;
@property (retain) Polyline *mouthTopLine;
@property (retain) PolylinePair *nosePair;
@property struct CGPath { }*noseTipPerimeterPath;
@property (retain) PolylinePair *rightEyePair;
@property (retain) PolylinePair *teethPair;
@property struct CGPoint { double x1; double x2; } upVec;

- (void)dealloc;
- (id)eyebrowLeftTopLine;
- (id)eyebrowRightTopLine;
- (id)faceData;
- (struct CGPath { }*)headPerimeter;
- (id)headPerimeterLinePair;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRect;
- (id)initWithFaceLandmarks:(id)arg1 forImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)leftEyePair;
- (struct CGPoint { double x1; double x2; })leftToRightVec;
- (id)mouthBottomLine;
- (id)mouthPerimeterLinePair;
- (id)mouthTopLine;
- (id)nosePair;
- (struct CGPath { }*)noseTipPerimeterPath;
- (id)rightEyePair;
- (void)setEyebrowLeftTopLine:(id)arg1;
- (void)setEyebrowRightTopLine:(id)arg1;
- (void)setFaceData:(id)arg1;
- (void)setHeadPerimeter:(struct CGPath { }*)arg1;
- (void)setHeadPerimeterLinePair:(id)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLeftEyePair:(id)arg1;
- (void)setLeftToRightVec:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMouthBottomLine:(id)arg1;
- (void)setMouthPerimeterLinePair:(id)arg1;
- (void)setMouthTopLine:(id)arg1;
- (void)setNosePair:(id)arg1;
- (void)setNoseTipPerimeterPath:(struct CGPath { }*)arg1;
- (void)setRightEyePair:(id)arg1;
- (void)setTeethPair:(id)arg1;
- (void)setUpVec:(struct CGPoint { double x1; double x2; })arg1;
- (id)teethPair;
- (struct CGPoint { double x1; double x2; })upVec;

@end
