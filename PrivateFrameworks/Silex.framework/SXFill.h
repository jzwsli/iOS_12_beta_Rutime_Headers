/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFill : SXJSONObject <SXClassFactoryProtocol>

@property (nonatomic, readonly) unsigned long long attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fillMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long horizontalAlignment;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long verticalAlignment;

+ (void)initializeObject;
+ (id)typeString;

- (unsigned long long)attachmentWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)fillModeWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)horizontalAlignmentWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2;

@end
