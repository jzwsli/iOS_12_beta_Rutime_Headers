/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageLayoutPageGenerator : NSObject <TPPageGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)createOrUpdatePageHintInSectionHint:(id)arg1 withState:(id)arg2;
- (bool)wantsPageInSectionHint:(id)arg1 withState:(id)arg2;

@end
