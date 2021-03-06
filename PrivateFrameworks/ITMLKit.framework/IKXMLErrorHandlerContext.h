/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKXMLErrorHandlerContext : NSObject {
    NSMutableString * _mutableErrorMessages;
    NSMutableSet * _mutableParserErrors;
}

@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, retain) NSMutableString *mutableErrorMessages;
@property (nonatomic, retain) NSMutableSet *mutableParserErrors;
@property (nonatomic, readonly) NSArray *parserErrors;

- (void).cxx_destruct;
- (void)clear;
- (id)errorMessage;
- (id)init;
- (id)mutableErrorMessages;
- (id)mutableParserErrors;
- (id)parserErrors;
- (void)setMutableErrorMessages:(id)arg1;
- (void)setMutableParserErrors:(id)arg1;

@end
