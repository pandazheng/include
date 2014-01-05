/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSTimer;

@interface SBBacklightController : NSObject
{
    double _minimumLockIdleTime;
    NSTimer *_autoLockTimer;
    double _lastTimeIdleCausedDim;
    double _nextLockDurationAfterDim;
    unsigned int _disableAutoDimming:1;
    unsigned int _lockScreenCameraWantsIdleTimerDisabled:1;
    NSMutableSet *_idleTimerDisabledReasons;
    NSMutableSet *_spuriousScreenUndimmingAssertions;
    BOOL _isPendingScreenUnblankAfterCACommit;
    BOOL _undimmedForBulletinSinceLastUserEvent;
}

+ (BOOL)deviceSupportsBacklightRamping;
+ (instancetype)sharedInstanceIfExists;
+ (instancetype)sharedInstance;
+ (instancetype)_sharedInstanceCreateIfNeeded:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isPendingScreenUnblankAfterCACommit; // @synthesize isPendingScreenUnblankAfterCACommit=_isPendingScreenUnblankAfterCACommit;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (void)preventIdleSleep;
- (void)allowIdleSleep;
- (void)_requestedUserEventNotificationOccurred;
- (void)_userEventPresenceTimerExpired;
- (void)_userEventOccurred;
- (void)_userEventsDidIdle;
- (void)_lockScreenDimTimerFired;
- (void)_didIdle;
- (void)_autoLockTimerFired:(id)arg1;
- (void)_startFadeOutAnimationIfNecessary;
- (BOOL)_lockScreenWantsUserEventNotifications;
- (void)removeSpuriousScreenUndimmingAssertion:(id)arg1;
- (void)addSpuriousScreenUndimmingAssertion:(id)arg1;
- (void)autoLockPrefsChanged;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 completion:(id)arg4;
- (void)setBacklightFactor:(float)arg1 source:(int)arg2;
- (void)setBacklightFactorPending:(float)arg1;
- (id)idleTimerDisabledReasons;
@property(readonly, nonatomic) BOOL screenIsOff;
- (void)_deferredScreenUnblankDone;
- (void)turnOnScreenFullyWithBacklightSource:(int)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)setIdleTimerDisabled:(BOOL)arg1;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (double)defaultLockScreenDimInterval;
- (void)_resetLockScreenIdleTimerWithDuration:(double)arg1 mode:(int)arg2;
- (void)resetLockScreenIdleTimerWithDuration:(double)arg1;
- (void)resetLockScreenIdleTimer;
- (void)cancelLockScreenIdleTimer;
- (double)_currentLockScreenIdleTimerInterval;
- (void)_resetIdleTimerAndUndim:(BOOL)arg1 source:(int)arg2;
- (void)resetIdleTimerAndUndimForBulletin;
- (void)resetIdleTimerAndUndim:(BOOL)arg1;
- (void)_undimFromSource:(int)arg1;
- (double)_nextLockTimeDuration;
- (double)_nextIdleTimeDuration;
- (void)clearIdleTimer;
- (void)restoreBacklightFactorForProx;
- (void)setBacklightFactorToZeroForProx;
- (void)_cancelSetBacklightFactorToZeroAfterDelay;
- (void)_setBacklightFactorToZeroForProx;
- (void)_clearAutoLockTimer;
- (id)init;

@end

