//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _UITapticEngine : NSObject
{
}

- (void)_setActivated:(_Bool)arg1 forFeedback:(long long)arg2;
- (void)_actuateSystemSoundWithIdentifier:(unsigned int)arg1;
- (double)_preferredDelayForFeedback:(long long)arg1;
- (unsigned int)_systemSoundIdentifierForFeedback:(long long)arg1;
- (void)actuateFeedback:(long long)arg1;
- (void)endUsingFeedback:(long long)arg1;
- (void)prepareUsingFeedback:(long long)arg1;

@end
