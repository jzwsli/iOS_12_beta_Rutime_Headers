/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsContactsManager : NSObject {
    NSArray * _contactsViewModels;
    CKConversation * _conversation;
    <CKDetailsContactsManagerDelegate> * _delegate;
    NSDictionary * _facetimeAudioIDStatuses;
    NSDictionary * _facetimeIDStatuses;
    NSString * _serviceAvailabilityKey;
}

@property (nonatomic, readonly, copy) NSArray *contacts;
@property (nonatomic, copy) NSArray *contactsViewModels;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) <CKDetailsContactsManagerDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *facetimeAudioIDStatuses;
@property (nonatomic, retain) NSDictionary *facetimeIDStatuses;
@property (nonatomic, retain) NSString *serviceAvailabilityKey;

- (void).cxx_destruct;
- (bool)_conversationHasLeft;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (long long)_facetimeAudioIDStatusForEntity:(id)arg1;
- (long long)_facetimeIDStatusForEntity:(id)arg1;
- (void)_handleAddressBookChange:(id)arg1;
- (void)_handleConversationPendingRecipientsDidChange:(id)arg1;
- (void)_handleConversationRecipientsDidChange:(id)arg1;
- (void)_handleLocationChanged:(id)arg1;
- (bool)_hasLinkedTelephoneNumbersForEntity:(id)arg1;
- (bool)_isFaceTimeAudioAvailable;
- (bool)_isFaceTimeVideoAvailable;
- (bool)_isTelephonyDevice;
- (void)_refreshFaceTimeIDSStatusWithCompletion:(id /* block */)arg1;
- (bool)_showFaceTimeVideoButtonForEntity:(id)arg1;
- (bool)_showMessageButtonForEntity:(id)arg1;
- (bool)_showPhoneButtonForEntity:(id)arg1;
- (void)_startCallWithEntity:(id)arg1 phoneAddress:(id)arg2;
- (void)_startCommunicationForEntity:(id)arg1;
- (void)_startFacetimeCommunicationForEntity:(id)arg1 audioOnly:(bool)arg2;
- (void)_startMessageWithEntity:(id)arg1;
- (void)_updateViewModels;
- (id)contacts;
- (id)contactsViewModels;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (id)facetimeAudioIDStatuses;
- (id)facetimeIDStatuses;
- (id)initWithConversation:(id)arg1 delegate:(id)arg2;
- (id)serviceAvailabilityKey;
- (void)setContactsViewModels:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFacetimeAudioIDStatuses:(id)arg1;
- (void)setFacetimeIDStatuses:(id)arg1;
- (void)setServiceAvailabilityKey:(id)arg1;
- (void)startCommunicationForEntity:(id)arg1 action:(unsigned long long)arg2 address:(id)arg3;

@end
