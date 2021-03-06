/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEStringCellValue : TSCECellValue {
    /* Warning: unhandled struct encoding: '{TSCEStringValue=^^?{ObjcSharedPtr<NSString>=@}{TSCEFormat=iB^v}}' */ struct TSCEStringValue { int (**x1)(); struct ObjcSharedPtr<NSString> { id x_2_1_1; struct TSCEFormat { int x_2_2_1; bool x_2_2_2; void *x_2_2_3; } x_2_1_2; } x2; } * _stringValue;
}

- (long long)compareToCellValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayString;
- (void)encodeToArchive:(struct StringCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct FormatStructArchive {} *x6; bool x7; }*)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct StringCellValueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct FormatStructArchive {} *x6; bool x7; }*)arg1 locale:(id)arg2;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (id)initWithStringValue:(/* Warning: unhandled struct encoding: '{TSCEStringValue=^^?{ObjcSharedPtr<NSString>=@}{TSCEFormat=iB^v}}' */ struct TSCEStringValue { int (**x1)(); struct ObjcSharedPtr<NSString> { id x_2_1_1; struct TSCEFormat { int x_2_2_1; bool x_2_2_2; void *x_2_2_3; } x_2_1_2; } x2; }*)arg1 locale:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCellValue:(id)arg1;
- (/* Warning: unhandled struct encoding: '{TSCEStringValue=^^?{ObjcSharedPtr<NSString>=@}{TSCEFormat=iB^v}}' */ struct TSCEStringValue { int (**x1)(); struct ObjcSharedPtr<NSString> { id x_2_1_1; struct TSCEFormat { int x_2_2_1; bool x_2_2_2; void *x_2_2_3; } x_2_1_2; } x2; }*)stringValue;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })tsceValue;

@end
