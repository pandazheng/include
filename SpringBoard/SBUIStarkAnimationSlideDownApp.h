/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBUIStarkScreenAnimationController.h"

@class SBAlert, UIView;

@interface SBUIStarkAnimationSlideDownApp : SBUIStarkScreenAnimationController
{
    UIView *_viewToAnimate;
    UIView *_activatingContextHostView;
    UIView *_deactivatingContextHostView;
    UIView *_deactivatingDimmingView;
    SBAlert *_alertImpersonator;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 alertImpersonator:(id)arg2 deactivatingApp:(id)arg3 starkScreenController:(id)arg4;

@end

