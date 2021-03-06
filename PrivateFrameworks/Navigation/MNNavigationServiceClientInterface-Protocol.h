//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOETARoute, GEONavigationGuidanceState, GEOStep, MNActiveRouteDetails, MNLocationDetails, MNTracePlaybackDetails, MNTrafficIncidentAlertDetails, NSArray, NSString;

@protocol MNNavigationServiceClientInterface <NSObject>
- (void)didUpdateTracePlaybackDetails:(MNTracePlaybackDetails *)arg1;
- (void)didUpdateTrafficForETARoute:(GEOETARoute *)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 withRouteDetails:(MNActiveRouteDetails *)arg4;
- (void)didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg1;
- (void)didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg1;
- (void)didReceiveTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg1;
- (void)failedRerouteWithErrorCode:(long long)arg1;
- (void)didSwitchToNewTransportType:(int)arg1 newRoute:(MNActiveRouteDetails *)arg2;
- (void)didCancelReroute;
- (void)didRerouteWithDetails:(MNActiveRouteDetails *)arg1 withLocationDetails:(MNLocationDetails *)arg2;
- (void)willReroute;
- (void)didEnableGuidancePrompts:(_Bool)arg1;
- (void)didArrive;
- (void)didSignalAlightForStepAtIndex:(unsigned long long)arg1;
- (void)hideSecondaryStep;
- (void)displaySecondaryStep:(GEOStep *)arg1 instructions:(NSArray *)arg2 shieldType:(int)arg3 shieldText:(NSString *)arg4 drivingSide:(int)arg5;
- (void)displayManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)displayPrimaryStep:(GEOStep *)arg1 instructions:(NSArray *)arg2 shieldType:(int)arg3 shieldText:(NSString *)arg4 drivingSide:(int)arg5 maneuverStepIndex:(unsigned long long)arg6 isSynthetic:(_Bool)arg7;
- (void)didUpdateDistanceUntilManeuver:(double)arg1 timeUntilManeuver:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateProceedToRouteDistance:(double)arg1 displayString:(NSString *)arg2 remainingTime:(double)arg3 remainingDistance:(double)arg4 closestStepIndex:(unsigned long long)arg5;
- (void)didUpdateRemainingTime:(double)arg1 remainingDistance:(double)arg2;
- (void)didUpdateStepIndex:(unsigned long long)arg1 legIndex:(unsigned long long)arg2;
- (void)didUpdateMatchedLocation:(MNLocationDetails *)arg1;
- (void)didChangeGuidanceLevel:(int)arg1;
- (void)didChangeGuidanceState:(GEONavigationGuidanceState *)arg1;
- (void)didChangeNavigationState:(int)arg1;
- (void)permanentlyFailedToNavigateWithError:(long long)arg1;
- (void)willResumeFromPauseNavigation;
- (void)willPauseNavigation;
- (void)didStopNavigation;
- (void)willStopNavigation;
- (void)didStartNavigation;
- (void)willStartNavigationForRoute:(MNActiveRouteDetails *)arg1;
- (void)didPrepareNavigationWithRouteDetails:(MNActiveRouteDetails *)arg1;
@end

