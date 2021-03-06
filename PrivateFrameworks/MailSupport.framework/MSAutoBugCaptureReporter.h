/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface MSAutoBugCaptureReporter : NSObject {
    SDRDiagnosticReporter * _diagnosticReporter;
}

@property (nonatomic, retain) SDRDiagnosticReporter *diagnosticReporter;

+ (id)log;
+ (id)sharedReporter;

- (void).cxx_destruct;
- (id)diagnosticReporter;
- (id)init;
- (void)reportIssueType:(id)arg1 description:(id)arg2;
- (void)setDiagnosticReporter:(id)arg1;

@end
