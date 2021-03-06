/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingCopyParticipantTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSString * _baseToken;
    CKRecordID * _contentRecordID;
    NSError * _error;
    bool  _iWorkShareable;
    bool  _isChildOfShare;
    NSString * _participantKey;
    CKRecordID * _shareID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchBaseTokenWithCompletion:(id /* block */)arg1;
- (id)createActivity;
- (id)initWithItem:(id)arg1;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
