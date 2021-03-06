/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPreloadStep : NSObject {
    unsigned int  bytesLoaded;
    unsigned int  bytesLoadedFromNetwork;
    struct { 
        double latitude; 
        double longitude; 
    }  coord;
    double  endTime;
    unsigned int  generation;
    unsigned int  hasError;
    unsigned int  hasLifetimeError;
    unsigned int  loaded;
    unsigned int  loading;
    unsigned int  nearManeuver;
    unsigned int  numRetries;
    unsigned int  preempted;
    double  routeIdx;
    double  startTime;
    GEOTileKeyList * wantedTiles;
}

- (void).cxx_destruct;
- (double)dataRateKB;
- (double)networkDataRateKB;
- (bool)okToLoad;
- (void)resetErrors;

@end
