/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDSpamController : NSObject {
    NSMutableDictionary * _chatGUIDToCountMap;
    NSMutableDictionary * _chatGUIDToSpamCheckTimerMap;
}

@property (retain) NSMutableDictionary *chatGUIDToCountMap;
@property (retain) NSMutableDictionary *chatGUIDToSpamCheckTimerMap;

+ (id)sharedInstance;

- (void)__queryServerForID:(id)arg1 count:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isDisabled;
- (void)_spamCheckTimerFired:(id)arg1;
- (void)_updateSpamCheckTimerWithInterval:(double)arg1 forChatGUID:(id)arg2;
- (id)chatGUIDToCountMap;
- (id)chatGUIDToSpamCheckTimerMap;
- (id)chatRegistry;
- (void)dealloc;
- (void)detectSpam:(id)arg1 chatGUID:(id)arg2;
- (id)init;
- (void)setChatGUIDToCountMap:(id)arg1;
- (void)setChatGUIDToSpamCheckTimerMap:(id)arg1;

@end
