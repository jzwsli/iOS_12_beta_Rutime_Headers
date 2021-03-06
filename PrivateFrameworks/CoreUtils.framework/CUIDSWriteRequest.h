/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUIDSWriteRequest : NSObject {
    id /* block */  _completion;
    NSData * _data;
    CUIDSWriteRequest * next;
    const char * writeBase;
    const char * writeEnd;
    const char * writePtr;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSData *data;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)data;
- (void)setCompletion:(id /* block */)arg1;
- (void)setData:(id)arg1;

@end
