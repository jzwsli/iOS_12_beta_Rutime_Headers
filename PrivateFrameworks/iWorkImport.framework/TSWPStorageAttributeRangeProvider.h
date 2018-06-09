/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageAttributeRangeProvider : TSWPStorageRangeProvider {
    struct TSWPAttributeEnumerator { int (**x1)(); id x2; unsigned long long x3; struct TSWPAttributeArray {} *x4; bool x5; unsigned long long x6; bool x7; struct TSWPAttributeRecord { unsigned long long x_8_1_1; id x_8_1_2; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x_8_1_3; unsigned short x_8_1_4; void*x_8_1_5; void*x_8_1_6; void*x_8_1_7; void*x_8_1_8; const void*x_8_1_9; void*x_8_1_10; const void*x_8_1_11; void*x_8_1_12; void*x_8_1_13; long doublex_8_1_14; void*x_8_1_15; void*x_8_1_16; void*x_8_1_17; void*x_8_1_18; union { struct { unsigned int x_1_3_1; } x_19_2_1; struct { unsigned short x_2_3_1; unsigned short x_2_3_2; } x_19_2_2; struct { unsigned short x_3_3_1; unsigned short x_3_3_2; } x_19_2_3; struct { int x_4_3_1; } x_19_2_4; struct { unsigned int x_5_3_1; } x_19_2_5; struct { unsigned short x_6_3_1; unsigned short x_6_3_2; } x_19_2_6; } x_8_1_19; } x8; } * _enumerator;
}

- (void)dealloc;
- (id)initWithStorage:(id)arg1 kind:(int)arg2;
- (void)nextRange;

@end
