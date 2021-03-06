/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

@interface ADDataObject : NSObject {
    NSError * _error;
    NSDictionary * _iAdData;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSDictionary *iAdData;

- (void).cxx_destruct;
- (id)error;
- (id)iAdData;
- (id)initWith:(id)arg1 andError:(id)arg2;
- (void)setError:(id)arg1;
- (void)setIAdData:(id)arg1;

@end
