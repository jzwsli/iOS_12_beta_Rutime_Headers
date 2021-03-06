/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMobileLibraryAdapter : NSObject <MFQueryableLibraryAdapter> {
    NSArray * _accounts;
    MFMailMessageLibrary * _library;
}

@property (nonatomic, retain) NSArray *accounts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFMailMessageLibrary *library;
@property (readonly) Class superclass;

- (id)_criterionForQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)_userCreatedMailboxes;
- (id)accounts;
- (unsigned long long)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 groupBy:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithAccounts:(id)arg1 mailLibrary:(id)arg2;
- (id)library;
- (id)mailboxesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)messagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 limit:(unsigned long long)arg3;
- (id)mostRecent:(unsigned long long)arg1 messagesForMailbox:(id)arg2;
- (void)setAccounts:(id)arg1;
- (void)setLibrary:(id)arg1;

@end
