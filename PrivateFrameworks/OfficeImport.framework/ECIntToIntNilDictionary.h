/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECIntToIntNilDictionary : OITSUIntToIntDictionary {
    long long  mNilValue;
    bool  mNilValueSet;
}

- (bool)intIsPresentForKey:(long long)arg1 outValue:(long long*)arg2;
- (void)setInt:(long long)arg1 forKey:(long long)arg2;

@end
