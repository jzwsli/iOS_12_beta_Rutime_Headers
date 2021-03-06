/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureTransitAccessPoint : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; } x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; short x_1_1_8; unsigned char x_1_1_9; struct { /* ? */ } *x_1_1_10; float x_1_1_11; float x_1_1_12; unsigned int x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; bool x_1_1_17; } x1; unsigned long long x2; unsigned char x3; float x4; unsigned short x5; float x6; } * _feature;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; } x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; short x_1_1_8; unsigned char x_1_1_9; struct { /* ? */ } *x_1_1_10; float x_1_1_11; float x_1_1_12; unsigned int x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; bool x_1_1_17; } x1; unsigned long long x2; unsigned char x3; float x4; unsigned short x5; float x6; }*feature;
@property (nonatomic, readonly) bool isEntrance;
@property (nonatomic, readonly) bool isExit;
@property (nonatomic, readonly) double radiusMeters;

- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; } x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; short x_1_1_8; unsigned char x_1_1_9; struct { /* ? */ } *x_1_1_10; float x_1_1_11; float x_1_1_12; unsigned int x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; bool x_1_1_17; } x1; unsigned long long x2; unsigned char x3; float x4; unsigned short x5; float x6; }*)feature;
- (id)initWithFeature:(struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; } x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; short x_1_1_8; unsigned char x_1_1_9; struct { /* ? */ } *x_1_1_10; float x_1_1_11; float x_1_1_12; unsigned int x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; bool x_1_1_17; } x1; unsigned long long x2; unsigned char x3; float x4; unsigned short x5; float x6; }*)arg1;
- (bool)isEntrance;
- (bool)isExit;
- (double)radiusMeters;

@end
