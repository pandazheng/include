/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBAppSliderIconControllerDelegate.h"
#import "SBAppSliderScrollingViewDelegate.h"
#import "SBVolumePressBandit.h"
#import "_UISettingsKeyObserver.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, SBAppSliderIconController, SBAppSliderScrollingViewController, SBAppSliderSettings, SBAppSwitcherServices, SBFakeStatusBarViewCache, UIView;

@interface SBAppSliderController : UIViewController <SBAppSliderIconControllerDelegate, SBAppSliderScrollingViewDelegate, _UISettingsKeyObserver, SBVolumePressBandit>
{
    id <SBAppSliderControllerDelegate> _delegate;
    NSMutableArray *_appList;
    SBAppSwitcherServices *_switcherServices;
    NSMutableDictionary *_switcherServiceViewControllerMap;
    unsigned int _appListAccessCount;
    SBAppSliderScrollingViewController *_pageController;
    SBAppSliderIconController *_iconController;
    UIView *_containerView;
    UIView *_contentView;
    UIView *_pageView;
    UIView *_iconView;
    UIView *_iconParallaxView;
    UIView *_iconParallaxCorrectionView;
    NSMutableSet *_hostedApplications;
    NSMutableDictionary *_appSnapshots;
    struct _NSRange _lastVisibleRange;
    unsigned int _startAnchorIndex;
    int _startingInterfaceOrientation;
    int _layoutInterfaceOrientation;
    BOOL _interactionEnabled;
    BOOL _visible;
    int _mode;
    BOOL _deferredWorkComplete;
    unsigned int _startingIndex;
    NSString *_startingDisplayIdentifier;
    NSDictionary *_startingViews;
    int _enterSide;
    SBAppSliderSettings *_settings;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSMutableArray *_servicesRemovedWhileAwayFromSwitcher;
    SBFakeStatusBarViewCache *_statusBarCache;
    struct CGAffineTransform _wallpaperTransform;
}

+ (BOOL)_shouldUseSerialSnapshotQueue;
+ (BOOL)shouldProvideHomeSnapshotIfPossible;
+ (BOOL)shouldProvideSnapshotIfPossible;
@property(nonatomic) struct CGAffineTransform wallpaperTransform; // @synthesize wallpaperTransform=_wallpaperTransform;
@property(nonatomic) id <SBAppSliderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *startingViews; // @synthesize startingViews=_startingViews;
@property(copy, nonatomic) NSString *startingDisplayIdentifier; // @synthesize startingDisplayIdentifier=_startingDisplayIdentifier;
- (id)pageController;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)sliderScrollerDidEndScrolling:(id)arg1;
- (BOOL)sliderScroller:(id)arg1 itemWantsToBeKeptInViewHierarchy:(unsigned int)arg2;
- (void)sliderScroller:(id)arg1 itemWantsToBeRemoved:(unsigned int)arg2;
- (BOOL)sliderScroller:(id)arg1 isIndexRemovable:(unsigned int)arg2;
- (void)sliderScrollerBeganPanning:(id)arg1;
- (void)sliderScroller:(id)arg1 itemTapped:(unsigned int)arg2;
- (void)sliderScroller:(id)arg1 contentOffsetChanged:(CGFloat)arg2;
- (CGFloat)sliderScrollerDistanceBetweenItemCenters:(id)arg1 forOrientation:(int)arg2;
- (struct CGSize)sliderScrollerItemSize:(id)arg1 forOrientation:(int)arg2;
- (id)sliderScroller:(id)arg1 viewForIndex:(unsigned int)arg2;
- (unsigned int)sliderScrollerItemCount:(id)arg1;
- (void)sliderIconScrollerBeganPanning:(id)arg1;
- (void)sliderIconScrollerDidEndScrolling:(id)arg1;
- (unsigned int)sliderIconScroller:(id)arg1 settledIndexForNormalizedOffset:(inout CGFloat *)arg2 andXVelocity:(CGFloat)arg3;
- (void)sliderIconScroller:(id)arg1 activate:(id)arg2;
- (void)sliderIconScroller:(id)arg1 contentOffsetChanged:(CGFloat)arg2;
- (void)_bringIconViewToFront;
- (void)_updateSnapshots;
- (unsigned int)_totalSnapshotsToKeepAround;
- (BOOL)_isSnapshotDisplayIdentifier:(id)arg1;
- (BOOL)isScrolling;
- (id)_animationSettingsForIconAlphaTransition;
- (id)_transitionAnimationFactory;
- (int)_windowInterfaceOrientation;
- (void)_disableContextHostingForApp:(id)arg1;
- (void)_quitAppAtIndex:(unsigned int)arg1;
- (void)_temporarilyHostAppForQuitting:(id)arg1;
- (void)_endAppListAccess;
- (id)_beginAppListAccess;
- (id)_displayIDAtIndex:(unsigned int)arg1;
- (void)_appActivationStateDidChange:(id)arg1;
- (void)_noteLockScreenCameraDidShow;
- (id)_iconListForAppList:(id)arg1;
- (void)_setInteractionEnabled:(BOOL)arg1;
- (id)_generateCellViewForIndex:(unsigned int)arg1;
- (id)_snapshotViewForDisplayIdentifier:(id)arg1;
- (id)_viewForService:(id)arg1;
- (void)_switcherServiceRemoved:(id)arg1;
- (void)_snapshotChangedOnDisk:(id)arg1;
- (void)_updatePageViewScale:(CGFloat)arg1;
- (void)_updatePageViewScale:(CGFloat)arg1 xTranslation:(CGFloat)arg2;
- (void)_updateForAnimationFrame:(CGFloat)arg1 withAnchor:(unsigned int)arg2;
- (CGFloat)_frameScaleValueForAnimation;
- (CGFloat)_scaleForFullscreenPageView;
- (void)_reverseAppList;
- (BOOL)_inMode:(int)arg1;
- (CGFloat)_sliderThumbnailVerticalPositionOffset;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
@property(readonly, nonatomic) NSArray *applicationList;
- (BOOL)wantsFullScreenLayout;
- (id)pageForDisplayIdentifier:(id)arg1;
- (BOOL)allowShowHide;
- (void)forceDismissAnimated:(BOOL)arg1;
- (void)animateDismissalToDisplayIdentifier:(id)arg1 withCompletion:(id)arg2;
- (void)switcherWasDismissed:(BOOL)arg1;
- (void)switcherWillBeDismissed:(BOOL)arg1;
- (void)switcherWasPresented:(BOOL)arg1;
- (void)_layoutInOrientation:(int)arg1;
- (void)animatePresentationFromDisplayIdentifier:(id)arg1 withViews:(id)arg2 fromSide:(int)arg3 withCompletion:(id)arg4;
- (void)_layout;
- (CGRect)_nominalPageViewFrame;
@property(readonly, nonatomic) SBAppSliderIconController *iconController;
- (BOOL)prefersStatusBarHidden;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

