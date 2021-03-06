/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOMapFeatureTileFinderRequest : NSObject <GEOMapFeatureAccessRequest> {
    GEOMapFeatureTileFinder * _tileFinder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTileFinder:(id)arg1;

@end
