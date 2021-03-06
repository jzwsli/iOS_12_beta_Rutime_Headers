/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCDDelayedNode : NSObject {
    <OCDDelayedNodeContext> * mDelayedContext;
    bool  mLoaded;
}

- (void)dealloc;
- (id)delayedContext;
- (bool)isLoaded;
- (bool)load;
- (void)setDelayedContext:(id)arg1;
- (void)setLoaded:(bool)arg1;

@end
