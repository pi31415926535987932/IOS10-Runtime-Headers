//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIKeyboardBasedTextSelectionGestureController.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedNonEditableTextSelectionGestureController : _UIKeyboardBasedTextSelectionGestureController
{
    _Bool _useEditableGesture;
}

- (void)_synchronousGranularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(_Bool)arg3;
- (void)oneFingerForcePress:(id)arg1;
- (void)oneFingerForcePan:(id)arg1;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;

@end

