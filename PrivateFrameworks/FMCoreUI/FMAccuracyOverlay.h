//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCircle.h>

@protocol MKAnnotation;

@interface FMAccuracyOverlay : MKCircle
{
    id <MKAnnotation> _parentAnnotation;
    double _horizontalAccuracy;
}

@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) __weak id <MKAnnotation> parentAnnotation; // @synthesize parentAnnotation=_parentAnnotation;
- (void).cxx_destruct;
- (id)description;

@end

