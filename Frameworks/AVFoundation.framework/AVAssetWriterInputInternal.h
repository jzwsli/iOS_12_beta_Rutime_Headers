/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputInternal : NSObject {
    NSObject<OS_dispatch_queue> * appendFailureReadWriteQueue;
    AVAssetWriterInputHelper * helper;
    NSObject<OS_dispatch_queue> * helperQueue;
    AVKeyPathDependencyManager * keyPathDependencyManager;
    long long  numberOfAppendFailures;
    AVAssetWriterInputPassDescriptionResponder * passDescriptionResponder;
    AVWeakReference * weakReference;
    AVWeakReference * weakReferenceToAssetWriter;
    AVWeakReference * weakReferenceToAttachedAdaptor;
}

@end
