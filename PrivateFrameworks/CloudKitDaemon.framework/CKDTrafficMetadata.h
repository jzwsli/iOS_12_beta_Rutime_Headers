/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTrafficMetadata : NSObject <NSSecureCoding> {
    NSDictionary * _headers;
    NSString * _method;
    long long  _status;
    NSDate * _timestamp;
    NSURL * _url;
}

@property (nonatomic, retain) NSDictionary *headers;
@property (nonatomic, retain) NSString *method;
@property (nonatomic) long long status;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)headers;
- (id)initWithCoder:(id)arg1;
- (id)method;
- (void)setHeaders:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUrl:(id)arg1;
- (long long)status;
- (id)timestamp;
- (id)url;

@end
