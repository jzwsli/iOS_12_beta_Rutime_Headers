/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFMailboxPredictorDiagnostics : NSObject <MFMailboxPredictorDiagnostics> {
    NSString * _debugOutput;
    NSDictionary * _modelInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *debugOutput;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *modelInfo;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)debugOutput;
- (id)initWithDebugOutput:(id)arg1;
- (id)initWithDebugOutput:(id)arg1 modelInfo:(id)arg2;
- (id)modelInfo;
- (void)setDebugOutput:(id)arg1;
- (void)setModelInfo:(id)arg1;

@end
