/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "SBControlCenterObserver.h"

@class SBChevronView, SBControlCenterContentContainerView;

@interface SBControlCenterContainerView : UIView <SBControlCenterObserver>
{
    UIView *_darkeningView;
    float _revealPercentage;
    SBChevronView *_chevronToTrack;
    SBControlCenterContentContainerView *_contentContainerView;
}

@property(readonly, nonatomic) SBControlCenterContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillFinishTransitionOpen:(BOOL)arg1 withDuration:(double)arg2;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)updateBackgroundSettings:(id)arg1;
@property(nonatomic) float revealPercentage;
- (id)_contentChevronView;
- (id)_currentBGColor;
- (void)_updateContentFrame;
- (void)_updateDarkeningFrame;
- (void)trackChevronView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

