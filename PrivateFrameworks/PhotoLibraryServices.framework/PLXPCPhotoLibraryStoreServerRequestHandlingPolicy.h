/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy

- (id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg1;
- (id)_restrictedEntityNamesAllowedForContext:(id)arg1;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (bool)shouldAcceptConnectionsFromClientWithContext:(id)arg1;
- (bool)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1;

@end
