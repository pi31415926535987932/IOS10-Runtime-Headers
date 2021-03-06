//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicCarDisplayUI/RURadioDataSourceDelegate-Protocol.h>

@class NSString, RURadioDataSource, RadioRecentStationsController;
@protocol MCDRadioContentManagerDelegate;

@interface MCDRadioContentManager : NSObject <RURadioDataSourceDelegate>
{
    RadioRecentStationsController *_recentStationsController;
    id <MCDRadioContentManagerDelegate> _delegate;
    RURadioDataSource *_dataSource;
}

+ (id)sharedInstance;
@property(retain, nonatomic) RURadioDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MCDRadioContentManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak RadioRecentStationsController *recentStationsController; // @synthesize recentStationsController=_recentStationsController;
- (void).cxx_destruct;
- (void)radioDataSourceDidInvalidate:(id)arg1;
- (void)recentRadioStationsDidUpdate:(id)arg1;
- (void)fetchFeaturedStations;
- (void)fetchRecentStations;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

