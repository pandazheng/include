/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBConferenceManager : NSObject
{
    BOOL _hasFaceTimeCapability;
    struct MGNotificationTokenStruct *_faceTimeCapabilityUpdateToken;
}

+ (void)initialize;
+ (id)sharedInstance;
- (void)_faceTimeAppActivationStateChanged:(id)arg1;
- (void)_updateStatusBar;
- (void)updateStatusBar;
- (void)_faceTimeCapabilityChanged:(id)arg1;
- (id)currentCallStatusDisplayString;
- (id)currentCallRemoteUserId;
- (void)endFaceTime;
- (void)_faceTimeStateChanged:(id)arg1;
- (void)invitedToIMAVChat:(id)arg1;
- (void)dealloc;
- (BOOL)canStartFaceTime;
- (BOOL)inFaceTime;
- (BOOL)activeFaceTimeCallExists;
- (BOOL)faceTimeInvitationExists;
- (BOOL)faceTimeIsAvailable;
- (BOOL)hasFaceTimeCapability;
- (id)_faceTimeApp;
- (id)init;

@end
