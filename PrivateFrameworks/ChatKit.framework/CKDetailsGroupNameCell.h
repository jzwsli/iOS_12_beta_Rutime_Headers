/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsGroupNameCell : CKDetailsCell <CKDetailsCell> {
    CKDetailsAddGroupNameView * _groupNameView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKDetailsAddGroupNameView *groupNameView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (void)dealloc;
- (id)groupNameView;
- (void)setGroupNameView:(id)arg1;

@end
