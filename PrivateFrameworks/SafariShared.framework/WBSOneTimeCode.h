/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSOneTimeCode : NSObject {
    NSString * _code;
    NSString * _displayCode;
    NSString * _guid;
    NSString * _handle;
    NSDate * _timeStamp;
}

@property (nonatomic, readonly, copy) NSString *code;
@property (nonatomic, readonly, copy) NSString *displayCode;
@property (nonatomic, readonly, copy) NSString *guid;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly) NSDate *timeStamp;

- (void).cxx_destruct;
- (id)code;
- (id)displayCode;
- (id)guid;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)timeStamp;

@end
