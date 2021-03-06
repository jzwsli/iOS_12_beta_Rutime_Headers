/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKLocalChanges : NSObject {
    NSDate * _endDate;
    NSArray * _insertedObjects;
    NSDate * _startDate;
    NSArray * _tombstones;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *insertedObjects;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSArray *tombstones;

- (void).cxx_destruct;
- (id)endDate;
- (id)initWithInsertedObjects:(id)arg1 tombstones:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)insertedObjects;
- (id)startDate;
- (id)tombstones;

@end
