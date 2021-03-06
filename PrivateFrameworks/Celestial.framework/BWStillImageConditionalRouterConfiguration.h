/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageConditionalRouterConfiguration : NSObject {
    unsigned int  _numberOfOutputs;
    id /* block */  _shouldEmitSampleBufferDecisionProvider;
}

@property (nonatomic, readonly) unsigned int numberOfOutputs;
@property (nonatomic, copy) id /* block */ shouldEmitSampleBufferDecisionProvider;

- (void)dealloc;
- (id)initWithNumberOfOutputs:(unsigned int)arg1;
- (unsigned int)numberOfOutputs;
- (void)setShouldEmitSampleBufferDecisionProvider:(id /* block */)arg1;
- (id /* block */)shouldEmitSampleBufferDecisionProvider;

@end
