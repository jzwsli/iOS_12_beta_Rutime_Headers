/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface ECEFCoordinate : NSObject {
    double  _x;
    double  _y;
    double  _z;
}

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

+ (id)fromLatLon:(id)arg1;

- (id)init;
- (id)initFromLatLon:(id)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (void)setZ:(double)arg1;
- (double)x;
- (double)y;
- (double)z;

@end
