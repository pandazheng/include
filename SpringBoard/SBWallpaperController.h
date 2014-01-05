/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBFWallpaperViewInternalObserver.h"
#import "SBFWallpaperViewLegibilityObserver.h"
#import "SBUIActiveOrientationObserver.h"
#import "UIWindowDelegate.h"

@class NSHashTable, NSMutableSet, SBFWallpaperView, SBWallpaperEffectView, SBWallpaperPreviewSnapshotCache, UIView, UIWindow;

@interface SBWallpaperController : NSObject <SBFWallpaperViewLegibilityObserver, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, UIWindowDelegate>
{
    UIWindow *_wallpaperWindow;
    UIView *_wallpaperContainerView;
    int _orientation;
    SBFWallpaperView *_lockscreenWallpaperView;
    SBFWallpaperView *_homescreenWallpaperView;
    SBFWallpaperView *_sharedWallpaperView;
    NSHashTable *_lockscreenObservers;
    NSHashTable *_homescreenObservers;
    CDStruct_f206ec99 _lockscreenPriorityInfo[3];
    CDStruct_f206ec99 _homescreenPriorityInfo[6];
    CDStruct_04b3617e _lockscreenStyleTransitionState;
    CDStruct_04b3617e _homescreenStyleTransitionState;
    SBWallpaperEffectView *_lockscreenEffectView;
    SBWallpaperEffectView *_homescreenEffectView;
    NSMutableSet *_suspendColorSamplingReasons;
    NSMutableSet *_suspendWallpaperAnimationReasons;
    NSMutableSet *_requireWallpaperReasons;
    NSMutableSet *_hideHomescreenWallpaperReasons;
    NSMutableSet *_hideLockscreenWallpaperReasons;
    int _displayedVariant;
    float _lockscreenOnlyWallpaperAlpha;
    NSHashTable *_lockscreenBlurViews;
    NSHashTable *_homescreenBlurViews;
    int _disallowRasterizationBlockCount;
    NSMutableSet *_disallowRasterizationReasonsHomeVariant;
    NSMutableSet *_disallowRasterizationReasonsLockVariant;
    struct CGColor *_homescreenLightForegroundBlurColor;
    struct CGRect _homescreenLightForegroundBlurColorRect;
    BOOL _isSuspendingMotionEffectsForBlur;
    SBWallpaperPreviewSnapshotCache *_previewCache;
    int _activeOrientationSource;
    BOOL _coalescingGeometryChanges;
    int _locationsWithCoalescedGeometryChanges;
    float _homescreenWallpaperScale;
    float _lockscreenWallpaperScale;
}

+ (id)sharedInstance;
@property(nonatomic) float lockscreenWallpaperScale; // @synthesize lockscreenWallpaperScale=_lockscreenWallpaperScale;
@property(nonatomic) float homescreenWallpaperScale; // @synthesize homescreenWallpaperScale=_homescreenWallpaperScale;
- (void)wallpaperViewDidChangeWantsRasterization:(id)arg1;
- (void)wallpaperView:(id)arg1 didChangeZoomFactor:(float)arg2;
- (void)wallpaperViewDidInvalidateGeometry:(id)arg1;
- (void)wallpaperViewDidInvalidateBlurs:(id)arg1;
- (void)wallpaperView:(id)arg1 legibilitySettingsDidChange:(id)arg2;
- (void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)orientationSource:(int)arg1 didRotateFromInterfaceOrientation:(int)arg2;
- (void)orientationSource:(int)arg1 willAnimateRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)orientationSource:(int)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (BOOL)_isAcceptingOrientationChangesFromSource:(int)arg1;
- (void)setActiveOrientationSource:(int)arg1 andUpdateToOrientation:(int)arg2;
- (void)_updateRasterizationState;
- (void)_endDisallowRasterizationBlock;
- (void)_beginDisallowRasterizationBlock;
- (id)_getImageInRect:(struct CGRect)arg1 withZoomFactor:(float)arg2 forVariant:(int)arg3 style:(inout int *)arg4;
- (id)_newFakeBlurViewForVariant:(int)arg1;
- (void)_clearHomescreenLightForegroundBlurColor;
- (void)_createHomescreenLightForegroundBlurColorIfNecessary;
- (void)_updateBlurGeneration;
- (id)_sourceForFakeBlurView:(id)arg1;
- (void)_unregisterFakeBlurView:(id)arg1;
- (void)_registerFakeBlurView:(id)arg1;
- (void)_suspendOrResumeWallpaperAnimation;
- (void)_suspendOrResumeColorSampling;
- (id)_blurViewsForVariant:(int)arg1;
- (id)_observersForVariant:(int)arg1;
- (id)_wallpaperViewForVariant:(int)arg1;
- (id)_blurImageObservableForBlurView:(id)arg1 sourceView:(id)arg2;
- (void)_updateBlurImagesForVariant:(int)arg1;
- (void)_reconfigureBlurViewsForVariant:(int)arg1;
- (void)_handleWallpaperGeometryChangedForVariant:(int)arg1;
- (void)_handleWallpaperLegibilitySettingsChanged:(id)arg1 forVariant:(int)arg2;
- (void)_handleWallpaperChangedForVariant:(int)arg1;
- (BOOL)_updateEffectViewForVariant:(int)arg1 withFactory:(id)arg2;
- (void)_updateMotionEffectsForState:(CDStruct_04b3617e)arg1;
- (BOOL)_shouldSuspendMotionEffectsForState:(CDStruct_04b3617e)arg1;
- (void)_endSuspendingMotionEffectsForBlurIfNeeded;
- (void)_beginSuspendingMotionEffectsForBlurIfNeeded;
- (void)_updateScreenBlanked;
- (void)_accessibilityEnhanceBackgroundContrastChanged:(id)arg1;
- (void)_motionEffectsChanged;
- (id)_newWallpaperEffectViewForVariant:(int)arg1 transitionState:(CDStruct_04b3617e)arg2;
- (void)_clearWallpaperEffectView:(id *)arg1;
- (void)_clearWallpaperView:(id *)arg1;
- (id)_newWallpaperViewForProcedural:(id)arg1 orImage:(id)arg2;
- (void)_updateSeparateWallpaper;
- (void)_updateSharedWallpaper;
- (void)_updateWallpaperForLocations:(int)arg1 withCompletion:(id)arg2;
- (BOOL)variantsShareWallpaper;
- (void)_updateWallpaperHidden;
- (void)_setWallpaperHidden:(BOOL)arg1 variant:(int)arg2 reason:(id)arg3;
- (BOOL)_setDisallowRasterization:(BOOL)arg1 withReason:(id)arg2 reasons:(id)arg3;
- (BOOL)_isRasterizationDisallowedForCurrentVariant;
- (void)setDisallowsRasterization:(BOOL)arg1 forVariant:(int)arg2 withReason:(id)arg3;
- (id)previewCache;
- (struct CGSize)homescreenLightForegroundBlurColorPhaseForRect:(struct CGRect)arg1;
- (struct CGColor *)homescreenLightForegroundBlurColor;
- (id)averageColorInRect:(struct CGRect)arg1 forVariant:(int)arg2 withSmudgeRadius:(float)arg3;
- (id)averageColorInRect:(struct CGRect)arg1 forVariant:(int)arg2;
- (id)averageColorForVariant:(int)arg1;
- (id)legibilitySettingsForVariant:(int)arg1;
- (void)resumeWallpaperAnimationForReason:(id)arg1;
- (void)suspendWallpaperAnimationForReason:(id)arg1;
- (void)resumeColorSamplingForReason:(id)arg1;
- (void)suspendColorSamplingForReason:(id)arg1;
- (void)removeObserver:(id)arg1 forVariant:(int)arg2;
- (void)addObserver:(id)arg1 forVariant:(int)arg2;
- (void)endRequiringWithReason:(id)arg1;
- (void)beginRequiringWithReason:(id)arg1;
- (void)removeHomescreenStyleForGuidedAccessPriorityWithAnimationFactory:(id)arg1;
- (void)setHomescreenStyleForGuidedAccessPriorityWithAnimationFactory:(id)arg1;
- (BOOL)removeLockscreenStyleForPriority:(int)arg1 withAnimationFactory:(id)arg2;
- (BOOL)removeHomescreenStyleForPriority:(int)arg1 withAnimationFactory:(id)arg2;
- (BOOL)setLockscreenStyleTransitionState:(CDStruct_04b3617e)arg1 forPriority:(int)arg2 withAnimationFactory:(id)arg3;
- (BOOL)setHomescreenStyleTransitionState:(CDStruct_04b3617e)arg1 forPriority:(int)arg2 withAnimationFactory:(id)arg3;
- (BOOL)setLockscreenStyle:(int)arg1 forPriority:(int)arg2 withAnimationFactory:(id)arg3;
- (BOOL)setHomescreenStyle:(int)arg1 forPriority:(int)arg2 withAnimationFactory:(id)arg3;
- (CDStruct_04b3617e)currentHomescreenStyleTransitionState;
- (void)setLockscreenOnlyWallpaperAlpha:(float)arg1;
@property(nonatomic) float windowLevel;
- (void)setLockscreenWallpaperContentsRect:(struct CGRect)arg1;
- (void)setVariant:(int)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(id)arg4;
@property(nonatomic) int variant;
- (void)dealloc;
- (id)initWithOrientation:(int)arg1 variant:(int)arg2;

@end

