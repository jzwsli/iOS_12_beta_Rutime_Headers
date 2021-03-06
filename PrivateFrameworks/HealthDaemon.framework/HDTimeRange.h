/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTimeRange : NSObject <NSCopying> {
    bool  _deleted;
    double  _end;
    double  _start;
}

@property (nonatomic) bool deleted;
@property (nonatomic) double end;
@property (nonatomic) double start;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (double)end;
- (void)setDeleted:(bool)arg1;
- (void)setEnd:(double)arg1;
- (void)setStart:(double)arg1;
- (double)start;

@end
