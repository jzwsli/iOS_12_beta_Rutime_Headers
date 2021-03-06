/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSGroupSession : NSObject {
    _IDSGroupSession * _internal;
}

@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) unsigned int sessionEndedReason;
@property (nonatomic, readonly) NSString *sessionID;

- (void).cxx_destruct;
- (id)_internal;
- (void)dealloc;
- (id)destination;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (void)joinGroupSession;
- (void)joinWithOptions:(id)arg1;
- (void)leaveGroupSession;
- (void)requestActiveParticipants;
- (unsigned int)sessionEndedReason;
- (id)sessionID;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setParticipantInfo:(id)arg1;
- (void)setPreferences:(id)arg1;
- (unsigned int)state;
- (void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(bool)arg3;

@end
