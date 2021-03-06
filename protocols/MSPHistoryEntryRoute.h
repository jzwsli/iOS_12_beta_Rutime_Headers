/* made by EzioChiu.
 */

@protocol MSPHistoryEntryRoute <MSPHistoryEntry>

@required

- (GEOComposedWaypoint *)endWaypoint;
- (bool)navigationWasInterrupted;
- (GEOURLRouteHandle *)routeHandle;
- (GEOComposedWaypoint *)startWaypoint;
- (long long)transportType;

@end
