/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryFetchRequest : NSObject <NSSecureCoding> {
    NSString * _clientIdentifier;
    bool  _includeChangeAnchors;
    bool  _includeGroupChanges;
    bool  _unifyResults;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic) bool includeChangeAnchors;
@property (nonatomic) bool includeGroupChanges;
@property (nonatomic) bool unifyResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeChangeAnchors;
- (bool)includeGroupChanges;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIncludeChangeAnchors:(bool)arg1;
- (void)setIncludeGroupChanges:(bool)arg1;
- (void)setUnifyResults:(bool)arg1;
- (bool)unifyResults;

@end
