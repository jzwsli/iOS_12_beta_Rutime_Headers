/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

@interface PLCoreDuetEventInterval : NSObject {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (retain) NSDate *endDate;
@property (retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)description;
- (id)endDate;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
