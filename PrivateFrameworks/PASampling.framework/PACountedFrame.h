/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PACountedFrame : NSObject {
    unsigned int  _count;
}

@property unsigned int count;

- (unsigned int)count;
- (id)debugDescription;
- (void)setCount:(unsigned int)arg1;

@end
