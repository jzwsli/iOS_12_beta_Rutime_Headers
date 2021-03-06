/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLWorkflowController : NSObject {
    WFLActionImplementation * _currentActionImplementation;
    unsigned long long  _currentActionIndex;
    <WFLWorkflowControllerDelegate> * _delegate;
    long long  _executionContext;
    NSProgress * _progress;
    bool  _running;
    WFLWorkflow * _workflow;
}

@property (nonatomic, retain) WFLActionImplementation *currentActionImplementation;
@property (nonatomic) unsigned long long currentActionIndex;
@property (nonatomic) <WFLWorkflowControllerDelegate> *delegate;
@property (nonatomic) long long executionContext;
@property (nonatomic, retain) NSProgress *progress;
@property (getter=isRunning, nonatomic) bool running;
@property (nonatomic, readonly) WFLWorkflow *workflow;

+ (void)initialize;

- (void).cxx_destruct;
- (id)createImplementationForAction:(id)arg1;
- (id)currentActionImplementation;
- (unsigned long long)currentActionIndex;
- (void)dealloc;
- (id)delegate;
- (long long)executionContext;
- (id)initWithWorkflow:(id)arg1;
- (bool)isRunning;
- (id)progress;
- (void)runWithInput:(id)arg1;
- (void)setCurrentActionImplementation:(id)arg1;
- (void)setCurrentActionIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutionContext:(long long)arg1;
- (void)setProgress:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)stepWithInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (id)userInterfaceForRunningAction:(id)arg1;
- (id)workflow;
- (void)workflowControllerDidFinishRunningAction:(id)arg1;
- (void)workflowControllerDidFinishRunningWithOutput:(id)arg1;
- (void)workflowControllerDidStopWithError:(id)arg1;
- (void)workflowControllerWillRun;
- (void)workflowControllerWillRunAction:(id)arg1 withInput:(id)arg2 proceedHandler:(id /* block */)arg3;

@end
