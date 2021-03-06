/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableTextSourceFactory : NSObject <SXDataTableTextSourceFactory> {
    <SXActionProvider> * _actionProvider;
}

@property (nonatomic, readonly) <SXActionProvider> *actionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionProvider;
- (id)initWithActionProvider:(id)arg1;
- (id)textSourceWithFormattedText:(id)arg1 indexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2 dataSource:(id)arg3;

@end
