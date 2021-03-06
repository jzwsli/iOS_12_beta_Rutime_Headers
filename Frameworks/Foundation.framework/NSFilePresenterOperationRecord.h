/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePresenterOperationRecord : NSObject {
    NSString * operationDescription;
    id  reactor;
    long long  state;
}

@property (readonly) NSString *operationDescription;
@property id reactor;
@property (readonly) long long state;

+ (id)operationRecordWithDescription:(id)arg1;

- (id)_reactorQueue;
- (void)dealloc;
- (id)description;
- (void)didBegin;
- (void)didEnd;
- (id)operationDescription;
- (id)reactor;
- (void)setReactor:(id)arg1;
- (long long)state;
- (void)willEnd;

@end
