/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject {
    unsigned short  _offset;
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
        struct UUIDData<TSP::UUIDData> {} *__begin_; 
        struct UUIDData<TSP::UUIDData> {} *__end_; 
        struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
            struct UUIDData<TSP::UUIDData> {} *__value_; 
        } __end_cap_; 
    }  _orderedUuids;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property unsigned short offset;
@property (readonly) const /* Warning: unhandled struct encoding: '{vector<TSU::UUIDData<TSP::UUIDData>' */ struct *orderedUuids; /* unknown property attribute:  std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >=^{UUIDData<TSP::UUIDData>}}} */
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initFromMessage:(const struct RewriteRangeEntryArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct RepeatedPtrField<TSP::UUID> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; unsigned int x8; }*)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 orderedUuids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg2 offset:(unsigned short)arg3;
- (unsigned short)offset;
- (const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)orderedUuids;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)saveToMessage:(struct RewriteRangeEntryArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct RepeatedPtrField<TSP::UUID> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; unsigned int x8; }*)arg1;
- (void)setOffset:(unsigned short)arg1;

@end
