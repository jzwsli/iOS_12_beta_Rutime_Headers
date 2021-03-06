/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBMessageStreamReader : NSObject {
    Class  _classOfNextMessage;
    unsigned long long  _position;
    NSInputStream * _stream;
}

@property Class classOfNextMessage;
@property (readonly) unsigned long long position;

- (Class)classOfNextMessage;
- (void)dealloc;
- (id)initWithStream:(id)arg1;
- (id)nextMessage;
- (unsigned long long)position;
- (void)setClassOfNextMessage:(Class)arg1;

@end
