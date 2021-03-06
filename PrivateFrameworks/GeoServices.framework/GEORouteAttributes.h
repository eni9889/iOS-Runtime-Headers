/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEORouteAttributes : PBCodable  {
    int _basicPointsToBeIncluded;
    NSString *_phoneticLocaleIdentifier;
    int _trafficType;
    int _transportType;
    BOOL _includeContingencyRoutes;
    BOOL _includeLaneGuidance;
    BOOL _includeNavigationInfo;
    BOOL _includePhonetics;
    BOOL _includeTrafficAlongRoute;
    BOOL _includeZilchPoints;
    struct { 
        unsigned int basicPointsToBeIncluded : 1; 
        unsigned int trafficType : 1; 
        unsigned int transportType : 1; 
        unsigned int includeContingencyRoutes : 1; 
        unsigned int includeLaneGuidance : 1; 
        unsigned int includeNavigationInfo : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeTrafficAlongRoute : 1; 
        unsigned int includeZilchPoints : 1; 
    } _has;
}

@property BOOL hasTransportType;
@property int transportType;
@property BOOL hasIncludePhonetics;
@property BOOL includePhonetics;
@property BOOL hasIncludeNavigationInfo;
@property BOOL includeNavigationInfo;
@property BOOL hasIncludeZilchPoints;
@property BOOL includeZilchPoints;
@property BOOL hasIncludeContingencyRoutes;
@property BOOL includeContingencyRoutes;
@property BOOL hasIncludeLaneGuidance;
@property BOOL includeLaneGuidance;
@property BOOL hasBasicPointsToBeIncluded;
@property int basicPointsToBeIncluded;
@property BOOL hasTrafficType;
@property int trafficType;
@property(readonly) BOOL hasPhoneticLocaleIdentifier;
@property(retain) NSString * phoneticLocaleIdentifier;
@property BOOL hasIncludeTrafficAlongRoute;
@property BOOL includeTrafficAlongRoute;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (int)transportType;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasIncludeTrafficAlongRoute:(BOOL)arg1;
- (void)setHasTrafficType:(BOOL)arg1;
- (void)setHasBasicPointsToBeIncluded:(BOOL)arg1;
- (void)setHasIncludeLaneGuidance:(BOOL)arg1;
- (void)setHasIncludeContingencyRoutes:(BOOL)arg1;
- (void)setHasIncludeZilchPoints:(BOOL)arg1;
- (void)setHasIncludeNavigationInfo:(BOOL)arg1;
- (void)setIncludeTrafficAlongRoute:(BOOL)arg1;
- (BOOL)includeTrafficAlongRoute;
- (BOOL)hasIncludeTrafficAlongRoute;
- (void)setTrafficType:(int)arg1;
- (int)trafficType;
- (BOOL)hasTrafficType;
- (void)setBasicPointsToBeIncluded:(int)arg1;
- (int)basicPointsToBeIncluded;
- (BOOL)hasBasicPointsToBeIncluded;
- (void)setIncludeLaneGuidance:(BOOL)arg1;
- (BOOL)includeLaneGuidance;
- (BOOL)hasIncludeLaneGuidance;
- (void)setIncludeContingencyRoutes:(BOOL)arg1;
- (BOOL)includeContingencyRoutes;
- (BOOL)hasIncludeContingencyRoutes;
- (void)setIncludeZilchPoints:(BOOL)arg1;
- (BOOL)includeZilchPoints;
- (BOOL)hasIncludeZilchPoints;
- (void)setIncludeNavigationInfo:(BOOL)arg1;
- (BOOL)includeNavigationInfo;
- (BOOL)hasIncludeNavigationInfo;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (id)phoneticLocaleIdentifier;
- (BOOL)hasPhoneticLocaleIdentifier;
- (void)setIncludePhonetics:(BOOL)arg1;
- (BOOL)includePhonetics;
- (BOOL)hasIncludePhonetics;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setTransportType:(int)arg1;
- (BOOL)hasTransportType;
- (BOOL)readFrom:(id)arg1;

@end
