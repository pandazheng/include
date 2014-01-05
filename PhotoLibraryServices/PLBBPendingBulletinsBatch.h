/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, PLXPCTransaction;

@interface PLBBPendingBulletinsBatch : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableArray *_pendingBulletins;
    NSObject<OS_dispatch_source> *_coalescingTimerSource;
    PLXPCTransaction *_coalescingTimerTransaction;
    NSObject<OS_dispatch_source> *_downloadTimerSource;
    PLXPCTransaction *_downloadTimerTransaction;
    int _currentState;
    _Bool _downloadTimerExpired;
    id <PLBBPendingBulletinsBatchDelegate> _delegate;
}

@property id <PLBBPendingBulletinsBatchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_startDownloadTimer;
- (void)_cancelDownloadTimer;
- (void)_cancelCoalescingTimer;
- (void)_evaluateAndProcessPendingBulletins;
- (void)_scheduleEvaluatePendingBulletins;
- (void)noteAssetWithUUID:(id)arg1 didChangePlaceholderKindTo:(int)arg2 fromOldKind:(int)arg3;
- (void)removeBulletinsWithAlbumUUID:(id)arg1 bulletinTypes:(id)arg2;
- (void)removeBulletinsWithAssetUUID:(id)arg1 deleteCommentsOrLikesBulletin:(_Bool)arg2 deletePhotosAddedToAlbumBulletin:(_Bool)arg3;
- (_Bool)addBulletin:(id)arg1 forMergeOnly:(_Bool)arg2;
- (void)_transitionToStateForEvent:(int)arg1;
- (void)_trackCompletionPercentageForState:(int)arg1;
@property(readonly) _Bool canAcceptMergeBulletins;
@property(readonly) _Bool canAcceptNewBulletins;
- (void)dealloc;
- (id)initWithIsolationQueue:(id)arg1;

@end

