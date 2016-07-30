//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSArray;

@protocol LSApplicationWorkspaceObserverProtocol <NSObject>

@optional
- (void)networkUsageChanged:(_Bool)arg1;
- (void)applicationStateDidChange:(NSArray *)arg1;
- (void)applicationInstallsDidPrioritize:(NSArray *)arg1;
- (void)applicationInstallsDidCancel:(NSArray *)arg1;
- (void)applicationInstallsDidResume:(NSArray *)arg1;
- (void)applicationInstallsDidPause:(NSArray *)arg1;
- (void)applicationInstallsArePrioritized:(NSArray *)arg1 arePaused:(NSArray *)arg2;
- (void)applicationsDidFailToUninstall:(NSArray *)arg1;
- (void)pluginsDidUninstall:(NSArray *)arg1;
- (void)applicationsDidUninstall:(NSArray *)arg1;
- (void)pluginsWillUninstall:(NSArray *)arg1;
- (void)applicationsWillUninstall:(NSArray *)arg1;
- (void)applicationsDidFailToInstall:(NSArray *)arg1;
- (void)pluginsDidInstall:(NSArray *)arg1;
- (void)applicationsDidInstall:(NSArray *)arg1;
- (void)applicationsWillInstall:(NSArray *)arg1;
- (void)applicationInstallsDidUpdateIcon:(NSArray *)arg1;
- (void)applicationInstallsDidChange:(NSArray *)arg1;
- (void)applicationInstallsDidStart:(NSArray *)arg1;
@end
