//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEONavigationObserver-Protocol.h>
#import <Navigation/MNGuidanceManagerDelegate-Protocol.h>
#import <Navigation/MNLocationManagerObserver-Protocol.h>
#import <Navigation/MNLocationTrackerDelegate-Protocol.h>
#import <Navigation/MNNavigationAudioSessionDelegate-Protocol.h>
#import <Navigation/MNTimeAndDistanceUpdaterDelegate-Protocol.h>
#import <Navigation/MNTracePlayerObserver-Protocol.h>

@class GEOComposedWaypoint, GEOETARoute, GEOMotionContext, GEONavigationGuidanceState, GEORouteAttributes, MNGuidanceManager, MNLocation, MNLocationTracker, MNNavigationAudioSession, MNObserverHashTable, MNRouteManager, MNTimeAndDistanceUpdater, MNTracePlayer, MNTracePlayerDataProvider, MNTraceRecorder, MNTrafficIncidentAlert, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationSession : NSObject <GEONavigationObserver, MNGuidanceManagerDelegate, MNLocationManagerObserver, MNLocationTrackerDelegate, MNNavigationAudioSessionDelegate, MNTracePlayerObserver, MNTimeAndDistanceUpdaterDelegate>
{
    int _navigationType;
    MNRouteManager *_routeManager;
    GEOComposedWaypoint *_destination;
    MNLocationTracker *_locationTracker;
    GEOMotionContext *_motionContext;
    MNNavigationAudioSession *_audioSession;
    MNGuidanceManager *_guidanceManager;
    MNTimeAndDistanceUpdater *_timeAndDistanceUpdater;
    NSString *_voiceLanguage;
    MNTracePlayer *_tracePlayer;
    MNTracePlayerDataProvider *_tracePlayerDataProvider;
    MNTraceRecorder *_traceRecorder;
    MNTrafficIncidentAlert *_activeTrafficIncidentAlert;
    _Bool _guidancePromptsEnabled;
    _Bool _isConnectedToCarplay;
    _Bool _isSpeakingTrafficIncidentAlert;
    GEONavigationGuidanceState *_guidanceState;
    MNObserverHashTable *_observers;
    NSString *_tileLoaderClient;
    _Bool _isAllowedToSwitchTransportTypes;
    GEOETARoute *_etaRoute;
}

@property(nonatomic) _Bool isConnectedToCarplay; // @synthesize isConnectedToCarplay=_isConnectedToCarplay;
@property(nonatomic) _Bool guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property(readonly, nonatomic) GEOETARoute *etaRoute; // @synthesize etaRoute=_etaRoute;
@property(readonly, nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) _Bool isAllowedToSwitchTransportTypes; // @synthesize isAllowedToSwitchTransportTypes=_isAllowedToSwitchTransportTypes;
@property(readonly, nonatomic) MNTraceRecorder *traceRecorder; // @synthesize traceRecorder=_traceRecorder;
@property(readonly, nonatomic) MNTracePlayer *tracePlayer; // @synthesize tracePlayer=_tracePlayer;
@property(readonly, nonatomic) GEOMotionContext *motionContext; // @synthesize motionContext=_motionContext;
@property(readonly, nonatomic) MNGuidanceManager *guidanceManager; // @synthesize guidanceManager=_guidanceManager;
@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (void)timeAndDistanceUpdater:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tracePlayerDidStayOnRoute:(id)arg1;
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 destination:(id)arg4;
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3;
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayerDidResume:(id)arg1;
- (void)tracePlayerDidPause:(id)arg1;
- (void)tracePlayerDidStop:(id)arg1;
- (void)tracePlayerDidStart:(id)arg1;
- (void)_announceStart;
- (void)_announceArrival:(id)arg1;
- (void)guidanceManagerHasArrived:(id)arg1 announce:(id)arg2;
- (_Bool)guidanceManagerIsOffRoute:(id)arg1 location:(id)arg2 stepIndex:(unsigned long long)arg3;
- (void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(unsigned long long)arg3 stage:(unsigned long long)arg4 hasSecondaryManeuver:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)guidanceManagerHideSecondaryStep:(id)arg1;
- (void)guidanceManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)guidanceManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)guidanceManagerDidUpdateProgress:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 currentStepIndex:(unsigned long long)arg4 distanceUntilManeuver:(double)arg5 timeUntilManeuver:(double)arg6;
- (void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6;
- (void)guidanceManager:(id)arg1 updatePointOfInterest:(CDStruct_2c43369c)arg2 focusStyle:(int)arg3;
- (void)navigation:(id)arg1 didChangeGuidanceState:(id)arg2;
- (void)navigation:(id)arg1 didChangeShouldSuppressCellularDataAlerts:(_Bool)arg2;
- (void)navigationDidChangeNavigationState:(id)arg1;
- (void)navigation:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingTime:(double)arg3;
- (void)audioSessionDidFinishAnnouncingArrival:(id)arg1;
- (void)audioSessionWillAnnounceArrival:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationTracker:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)locationTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)locationTracker:(id)arg1 didEnableGuidance:(_Bool)arg2;
- (void)locationTrackerWillResumeFromPause:(id)arg1;
- (void)locationTrackerWillPause:(id)arg1;
- (void)locationTracker:(id)arg1 updatePointOfInterest:(CDStruct_2c43369c)arg2 focusStyle:(int)arg3;
- (void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
- (void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;
- (void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)locationTracker:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 request:(id)arg3 response:(id)arg4;
- (void)locationTrackerDidCancelReroute:(id)arg1;
- (void)locationTrackerWillReroute:(id)arg1;
- (void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)locationTrackerDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2;
- (void)locationTrackerDidArrive:(id)arg1;
- (void)locationTrackerHideSecondaryStep:(id)arg1;
- (void)locationTracker:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(struct GEOJunctionElement *)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shieldType:(int)arg7 shieldText:(id)arg8 drivingSide:(int)arg9;
- (void)locationTracker:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)locationTracker:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(struct GEOJunctionElement *)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shieldType:(int)arg7 shieldText:(id)arg8 drivingSide:(int)arg9 maneuverStepIndex:(unsigned long long)arg10 isSynthetic:(_Bool)arg11;
- (void)locationTracker:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)locationTracker:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)locationTracker:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6;
- (void)locationTracker:(id)arg1 startingStepIndex:(unsigned long long)arg2;
- (void)locationTracker:(id)arg1 failedWithErrorCode:(long long)arg2;
- (void)locationTracker:(id)arg1 didChangeState:(int)arg2;
- (void)locationTracker:(id)arg1 ignoredLocation:(id)arg2;
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)_stopTravelTimeUpdates;
- (void)_startTravelTimeUpdates;
- (void)_stopGuidance;
- (void)_startGuidanceAllowMidRouteStart:(_Bool)arg1;
- (void)_stopAudioSession;
- (void)_startAudioSession;
- (void)_stopETAUpdates;
- (void)_startETAUpdates;
- (void)_stopMotionUpdates;
- (void)_startMotionUpdates;
- (void)_stopLocationUpdates;
- (void)_startLocationUpdates;
- (void)_stopLocationTracking;
- (void)_startLocationTracking;
- (void)_closeTrace;
- (void)_openTrace;
- (id)_locationTrackerForTransportType:(int)arg1 navigationType:(int)arg2;
- (void)_closeTileLoader;
- (void)_openTileLoader;
- (void)_setVolumeFromDefaults;
- (void)stopCurrentGuidancePrompt;
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;
- (_Bool)repeatCurrentTrafficAlert;
- (_Bool)repeatCurrentGuidance;
- (void)updateForSettings:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopNavigationSession;
- (void)startNavigationSessionWithDetails:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) double distanceToManeuverEnd;
@property(readonly, nonatomic) double distanceToManeuverStart;
@property(readonly, nonatomic) double remainingDistance;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) int navigationState;
@property(readonly, nonatomic) MNLocation *lastMatchedLocation;
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes;
- (void)dealloc;
- (id)initWithRouteManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
