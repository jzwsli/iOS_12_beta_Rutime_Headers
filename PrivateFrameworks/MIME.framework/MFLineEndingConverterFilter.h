/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFLineEndingConverterFilter : MFBaseFilterDataConsumer {
    bool  _lastCR;
}

- (long long)appendData:(id)arg1;
- (void)done;

@end
