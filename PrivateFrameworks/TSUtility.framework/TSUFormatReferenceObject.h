/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUFormatReferenceObject : NSObject {
    struct { 
        int mFormatType; 
        union { 
            struct { 
                NSString *mCurrencyCode; 
                unsigned int mDecimalPlaces : 8; 
                unsigned int mNegativeStyle : 3; 
                unsigned int mShowThousandsSeparator : 1; 
                unsigned int mUseAccountingStyle : 1; 
            } mNumberFormatStruct; 
            struct { 
                unsigned int mFractionAccuracy : 8; 
            } mFractionFormatStruct; 
            struct { 
                unsigned int mBase : 8; 
                unsigned int mBasePlaces : 8; 
                unsigned int mBaseUseMinusSign : 1; 
            } mBaseFormatStruct; 
            struct { 
                unsigned int mSuppressDateFormat : 1; 
                unsigned int mSuppressTimeFormat : 1; 
                NSString *mDateTimeFormat; 
            } mDateFormatStruct; 
            struct { 
                unsigned int mUseAutomaticUnits : 1; 
                int mDurationUnitSmallest; 
                int mDurationUnitLargest; 
                int mDurationStyle; 
            } mDurationFormatStruct; 
            struct { 
                unsigned int mCustomFormatID; 
                struct { /* ? */ } *mData; 
            } mCustomFormatStruct; 
            struct { 
                double mMinimum; 
                double mMaximum; 
                double mIncrement; 
                int mDisplayFormatType; 
                unsigned int mOrientation : 2; 
                unsigned int mPosition : 2; 
            } mControlFormatStruct; 
            struct { 
                int mInitialValue; 
                unsigned int mMultipleChoiceListFormatID; 
                <TSUMultipleChoiceListChoiceProviding> *mData; 
            } mMultipleChoiceListFormatStruct; 
        } ; 
    }  mFormatStruct;
}

- (void)dealloc;
- (struct { int x1; union { struct { id x_1_2_1; /* Warning: Unrecognized filer type: '8' using 'void*' */ void*x_1_2_2; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { unsigned int x_5_3_1; struct { /* ? */ } *x_5_3_2; } x_4_2_5; struct { double x_6_3_1; double x_6_3_2; double x_6_3_3; int x_6_3_4; unsigned int x_6_3_5 : 2; unsigned int x_6_3_6 : 2; } x_4_2_6; struct { int x_7_3_1; unsigned int x_7_3_2; id x_7_3_3; void*x_7_3_4; } x_4_2_7; } x_2_1_4; } x2; })getFormatStruct;
- (id)init;
- (id)initWithTSUFormatFormatStruct:(struct { int x1; union { struct { id x_1_2_1; /* Warning: Unrecognized filer type: '8' using 'void*' */ void*x_1_2_2; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { unsigned int x_5_3_1; struct { /* ? */ } *x_5_3_2; } x_4_2_5; struct { double x_6_3_1; double x_6_3_2; double x_6_3_3; int x_6_3_4; unsigned int x_6_3_5 : 2; unsigned int x_6_3_6 : 2; } x_4_2_6; struct { int x_7_3_1; unsigned int x_7_3_2; id x_7_3_3; void*x_7_3_4; } x_4_2_7; } x_2_1_4; } x2; })arg1;
- (bool)isEqual:(id)arg1;

@end
