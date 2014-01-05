/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBUIStarkScreenAnimationController.h"

@class SBAlert, UIView;

@interface SBUIStarkAnimationZoomUpApp : SBUIStarkScreenAnimationController
{
    SBAlert *_alertImpersonator;
    UIView *_viewToAnimate;
    UIView *_contextHostView;
    BOOL _requiresHostView;
    BOOL _activateBeforeHosting;
}

- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_animationProgressDependency;
- (BOOL)_animationShouldStart;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 withAlertImpersonator:(id)arg2 starkScreenController:(id)arg3;
- (id)initWithActivatingApp:(id)arg1 starkScreenController:(id)arg2;

@end

