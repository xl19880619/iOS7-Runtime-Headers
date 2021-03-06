/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSData;

@interface GEOETARoute : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _trafficColorOffsets;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _trafficColors;
    unsigned int _historicTravelTime;
    NSMutableArray *_incidentsOffReRoutes;
    NSMutableArray *_incidentsOnETARoutes;
    NSMutableArray *_incidentsOnReRoutes;
    NSMutableArray *_invalidSectionZilchPoints;
    NSMutableArray *_reroutedRoutes;
    NSData *_routeID;
    NSMutableArray *_steps;
    NSData *_zilchPoints;
    BOOL _routeNoLongerValid;
    struct { 
        unsigned int historicTravelTime : 1; 
        unsigned int routeNoLongerValid : 1; 
    } _has;
}

@property(readonly) BOOL hasRouteID;
@property(retain) NSData * routeID;
@property(retain) NSMutableArray * steps;
@property(readonly) BOOL hasZilchPoints;
@property(retain) NSData * zilchPoints;
@property BOOL hasRouteNoLongerValid;
@property BOOL routeNoLongerValid;
@property(retain) NSMutableArray * reroutedRoutes;
@property(retain) NSMutableArray * invalidSectionZilchPoints;
@property(readonly) unsigned int trafficColorsCount;
@property(readonly) unsigned int* trafficColors;
@property(readonly) unsigned int trafficColorOffsetsCount;
@property(readonly) unsigned int* trafficColorOffsets;
@property(retain) NSMutableArray * incidentsOnETARoutes;
@property(retain) NSMutableArray * incidentsOnReRoutes;
@property(retain) NSMutableArray * incidentsOffReRoutes;
@property BOOL hasHistoricTravelTime;
@property unsigned int historicTravelTime;


- (id)incidentsOnReRoutes;
- (id)incidentsOffReRoutes;
- (id)incidentsOnETARoutes;
- (id)invalidSectionZilchPoints;
- (id)reroutedRoutes;
- (void)setHasRouteNoLongerValid:(BOOL)arg1;
- (id)incidentsOffReRoutesAtIndex:(unsigned int)arg1;
- (void)clearIncidentsOffReRoutes;
- (unsigned int)incidentsOffReRoutesCount;
- (id)incidentsOnReRoutesAtIndex:(unsigned int)arg1;
- (void)clearIncidentsOnReRoutes;
- (unsigned int)incidentsOnReRoutesCount;
- (id)incidentsOnETARouteAtIndex:(unsigned int)arg1;
- (void)clearIncidentsOnETARoutes;
- (unsigned int)incidentsOnETARoutesCount;
- (id)invalidSectionZilchPointsAtIndex:(unsigned int)arg1;
- (void)clearInvalidSectionZilchPoints;
- (unsigned int)invalidSectionZilchPointsCount;
- (void)clearReroutedRoutes;
- (void)setRouteNoLongerValid:(BOOL)arg1;
- (BOOL)routeNoLongerValid;
- (BOOL)hasRouteNoLongerValid;
- (void)addIncidentsOffReRoutes:(id)arg1;
- (void)addIncidentsOnReRoutes:(id)arg1;
- (void)addIncidentsOnETARoute:(id)arg1;
- (void)addInvalidSectionZilchPoints:(id)arg1;
- (void)addReroutedRoute:(id)arg1;
- (void)setIncidentsOffReRoutes:(id)arg1;
- (void)setIncidentsOnReRoutes:(id)arg1;
- (void)setIncidentsOnETARoutes:(id)arg1;
- (void)setInvalidSectionZilchPoints:(id)arg1;
- (void)setReroutedRoutes:(id)arg1;
- (id)reroutedRouteAtIndex:(unsigned int)arg1;
- (unsigned int)reroutedRoutesCount;
- (id)steps;
- (void)setHasHistoricTravelTime:(BOOL)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned int*)trafficColorOffsets;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned int*)trafficColors;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (unsigned int)historicTravelTime;
- (BOOL)hasHistoricTravelTime;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned int)arg1;
- (void)clearTrafficColorOffsets;
- (unsigned int)trafficColorOffsetsCount;
- (void)addTrafficColor:(unsigned int)arg1;
- (unsigned int)trafficColorAtIndex:(unsigned int)arg1;
- (void)clearTrafficColors;
- (unsigned int)trafficColorsCount;
- (id)zilchPoints;
- (BOOL)hasZilchPoints;
- (id)routeID;
- (BOOL)hasRouteID;
- (id)stepAtIndex:(unsigned int)arg1;
- (void)clearSteps;
- (unsigned int)stepsCount;
- (void)addStep:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
