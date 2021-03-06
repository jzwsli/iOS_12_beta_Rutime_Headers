/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSUIRunPPTServiceRequest : SSUIServiceRequest {
    NSString * _testName;
}

@property (nonatomic, copy) NSString *testName;

+ (id)entitlement;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setTestName:(id)arg1;
- (id)testName;

@end
