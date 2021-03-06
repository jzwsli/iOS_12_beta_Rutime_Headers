/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

@interface FPUIAction : NSObject {
    bool  _displayInline;
    NSString * _displayName;
    NSString * _identifier;
    NSPredicate * _predicate;
    NSString * _uiActionProviderIdentifier;
}

@property (nonatomic, readonly) bool displayInline;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSString *uiActionProviderIdentifier;

- (void).cxx_destruct;
- (bool)displayInline;
- (id)displayName;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 displayName:(id)arg3 predicate:(id)arg4 displayInline:(bool)arg5;
- (id)predicate;
- (id)uiActionProviderIdentifier;

@end
