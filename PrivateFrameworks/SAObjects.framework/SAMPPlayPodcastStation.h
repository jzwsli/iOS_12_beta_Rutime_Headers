/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcastStation : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic) bool startPlaying;
@property (nonatomic, retain) SAMPPodcastStation *station;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)playPodcastStation;
+ (id)playPodcastStationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setStartPlaying:(bool)arg1;
- (void)setStation:(id)arg1;
- (bool)startPlaying;
- (id)station;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
