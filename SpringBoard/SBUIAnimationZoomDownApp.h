/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAppStatusBarTransitionInfo, UIView;

@interface SBUIAnimationZoomDownApp : SBUIMainScreenAnimationController
{
    UIView *_viewToAnimate;
    SBAppStatusBarTransitionInfo *_appStatusBarTransitionInfo;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)animateFakeStatusBarWithParameters:(id)arg1;
- (void)cleanupZoom;
- (void)animateZoomWithCompletion:(id)arg1;
- (void)prepareZoom;
- (double)animationDelay;
- (double)animationDuration;
- (id)appContext;
- (BOOL)prefersLayerHostSnapshot;
- (id)appStatusBarTransitionInfoWithStartEffectivelyHidden:(BOOL)arg1 endStyleRequest:(id)arg2 endOrientation:(int)arg3;
- (void)dealloc;
- (id)initWithDeactivatingApp:(id)arg1;

@end

