/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple {
    unsigned long long  mStyleOwnerIndex;
    int  mStyleOwnerType;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) int type;

- (unsigned long long)index;
- (id)indirectTuple;
- (id)initWithStyleOwner:(id)arg1 mutations:(id)arg2;
- (id)initWithStyleOwnerType:(int)arg1 index:(unsigned long long)arg2 inChart:(id)arg3 mutations:(id)arg4;
- (id)styleOwner;
- (id)styleOwnerRef;
- (int)type;

@end
