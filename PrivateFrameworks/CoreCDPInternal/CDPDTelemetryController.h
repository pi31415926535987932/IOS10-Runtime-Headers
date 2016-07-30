//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPDTelemetryController : NSObject
{
}

+ (id)sharedInstance;
- (void)stateMachineStartedFromClient:(unsigned long long)arg1;
- (void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned long long)arg1 didUseRemoteApproval:(_Bool)arg2;
- (void)signInFailedDueIncorrectICSCAttempts;
- (void)signInFailedDueToLockedAccount;
- (void)piggybackSuccess;
- (void)piggybackAttempt;
- (void)didUnlockAccount;
- (void)didLockAccount;
- (void)pcsRollbackFailed;
- (void)pcsRollbackSucceeded;
- (void)pcsAlreadyMigrated;
- (void)pcsMigrationFailed;
- (void)pcsMigrationSucceeded;
- (void)didRemoveLocalSecret;
- (void)didChangeLocalSecret;

@end
