/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <GraphicsServices/GraphicsServices.h>
#import <IOKit/hid/IOHIDEvent.h>

#import "SBIconView.h"
#import "SBFolderIconView.h"
#import "SBApplicationIcon.h"
#import "SBIconViewMap.h"
#import "SBIconImageView.h"
#import "SBIconListView.h"
#import "SBIconScrollView.h"
#import "SBIconModel.h"
#import "SBIconController.h"
#import "SBIconListView.h"
#import "SBDockIconListView.h"
#import "SBRootIconListView.h"
#import "SBFolder.h"
#import "SBFolderIcon.h"
#import "SBRootFolder.h"
#import "SBFolderView.h"
#import "SBRootFolderView.h"
#import "SBFolderController.h"
#import "SBRootFolderController.h"
#import "SBIconListPageControl.h"
#import "SBOrientationLockManager.h"
#import "SBCameraGrabberView.h"
#import "SBSearchViewController.h"
#import "SBUIController.h"
#import "SBFolderIconZoomAnimator.h"
#import "SBFolderIconFadeAnimator.h"
#import "SBIconAnimator.h"
#import "SBIconAnimationSettings.h"
#import "SBFolderZoomSettings.h"
#import "SBScaleIconZoomAnimator.h"
#import "SBPrototypeController.h"
#import "SBRootSettings.h"
#import "SBRootAnimationSettings.h"
#import <SpringBoardFoundation/SBFAnimationFactorySettings.h>
#import <SpringBoardFoundation/SBFAnimationSettings>

#import "NSIndexPath-SBIconIndex.h"

#import "MCProfileConnectionObserver-Protocol.h"
#import "SBPowerDownControllerDelegate-Protocol.h"

@class BBDataProviderConnection, SBApplication, SBCardItemsController, SBUIController;

@interface SpringBoard : UIApplication <SBPowerDownControllerDelegate, MCProfileConnectionObserver, UIApplicationDelegate>
{
    SBUIController *_uiController;
    NSTimer *_menuButtonTimer;
    NSTimer *_lockButtonTimer;
    double _headsetButtonDownTime;
    IOHIDEventRef _headsetDownEvent;
    NSInteger _headsetClickCount;
    NSInteger _ringerSwitchState;
    NSUInteger _headsetButtonClickCount:8;
    NSUInteger _menuButtonClickCount:8;
    NSUInteger _screenWasDimOnMenuDown:1;
    NSUInteger _waitingForMenuDoubleTapAfterActingOnSingleTap:1;
    NSUInteger _screenshotWasTaken:1;
    NSUInteger _dontLockOnNextLockUp:1;
    NSUInteger _poweringDown:1;
    NSUInteger _headsetDownDelayedActionPerformed:1;
    NSUInteger _isSeekingInMedia:1;
    NSInteger _statusBarOrientationOverride;
    NSInteger _mediaSeekDirection;
    NSUInteger _springBoardRequestsAccelerometerEvents;
    NSInteger _activeInterfaceOrientation;
    NSMutableSet *_activeInterfaceOrientationObservers;
    NSMutableArray *_activeInterfaceOrientationOverrideStack;
    BOOL _wantsOrientationEvents;
    NSInteger _notifyDontAnimateREOToken;
    NSInteger _notifyDontAllowMediaHUDToken;
    BOOL _expectsFaceContact;
    BOOL _expectsFaceContactInLandscape;
    BOOL _proximityEventsEnabled;
    BOOL _smartCoverClosed;
    BOOL _keybagRefetchTransactionIsActive;
    BOOL _menuButtonDown;
    NSSet *_restrictionDisabledApplications;
    SBApplication *_nowPlayingApp;
    SBApplication *_menuButtonInterceptApp;
    BOOL _menuButtonInterceptAppEnabledForever;
    NSMutableArray *_disableNowPlayingHUDAssertionBundleIds;
    NSMutableArray *_appsRegisteredForVolumeEvents;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_percentFormatter;
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    struct _opaque_pthread_t *_backgroundMIGServerThread;
    struct _opaque_pthread_t *_iconGenerationMIGServerThread;
    dispatch_source_t _memoryPressureSource;
    NSUInteger _memoryPressureStatus;
    NSMutableArray *_blocksAwaitingAvailableMemory;
    BBDataProviderConnection *_bulletinBoardConnection;
    dispatch_queue_t _bulletinBoardQueue;
    SBCardItemsController *_cardItemsController;
    struct __CFBoolean *_hasCameraCapability;
    struct __CFBoolean *_hasCameraRestriction;
    struct __CFBoolean *_shouldDelaySleepForHeadsetClick;
    NSHashTable *_volumePressBandits;
    unsigned long long _menuButtonHoldStartTime;
    double _menuButtonHoldAbsoluteStartTime;
    NSMutableArray *_menuButtonUpBlocks;
    BOOL _didPlayLockSound;
    NSHashTable *_disableActiveOrientationChangeAssertions;
    BOOL _typingActive;
}

+ (void)migrateSystemLocalNotifications;
+ (BOOL)rendersLocally;
+ (BOOL)registerAsSystemApp;
@property(nonatomic, getter=isTypingActive) BOOL typingActive; // @synthesize typingActive=_typingActive;
@property(readonly, nonatomic) dispatch_queue_t bulletinBoardQueue; // @synthesize bulletinBoardQueue=_bulletinBoardQueue;
@property(readonly, nonatomic) BBDataProviderConnection *bulletinBoardConnection; // @synthesize bulletinBoardConnection=_bulletinBoardConnection;
- (void)performWhenMenuButtonIsUpUsingBlock:(id)arg1;
- (void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)addDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)_sendBanditsVolumeDecreased;
- (void)_sendBanditsVolumeIncreased;
- (void)removeVolumePressBandit:(id)arg1;
- (void)addVolumePressBandit:(id)arg1;
- (BOOL)_hasVolumeBandits;
- (BOOL)shouldHostWidgetsRemotely;
- (void)noteKeybagRefetchTransactionIsActive:(BOOL)arg1;
- (BOOL)underMemoryPressure;
- (void)_setStatusBarShowsProgress:(BOOL)arg1;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (double)_accessibilityDeactivationAnimationStartDelay;
- (void)_accessibilityActivationAnimationWillBegin;
- (double)_accessibilityActivationAnimationStartDelay;
- (BOOL)_accessibilityObjectWithinProximity;
- (BOOL)_accessibilityIsSystemGestureActive;
- (void)_accessibilitySetSystemGesturesDisabledByAccessibility:(BOOL)arg1;
- (BOOL)_accessibilitySystemGesturesDisabledByAccessibility;
- (BOOL)_accessibilityShouldAllowIconLaunch;
- (BOOL)_accessibilityShouldAllowAppLaunch;
- (id)_accessibilityRunningApplications;
- (id)_accessibilityTopDisplay;
- (id)_accessibilityFrontMostApplication;
- (id)formattedPercentStringForNumber:(id)arg1;
- (id)formattedDecimalStringForNumber:(id)arg1;
- (BOOL)isCameraApp;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1;
- (void)setNowPlayingInfo:(id)arg1 forApplication:(id)arg2;
- (BOOL)isNowPlayingAppPlaying;
- (id)nowPlayingApp;
- (BOOL)isMusicPlayerInNowPlayingView;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (void)tearDown;
- (void)_tearDownNow;
- (BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2;
- (void)_launchMusicPlayerSuspendedAndStartMusic;
- (void)launchMusicPlayerSuspended;
- (NSInteger)alertInterfaceOrientation;
- (BOOL)isLocked;
- (BOOL)canShowAlerts;
- (void)setHasMiniAlerts:(BOOL)arg1;
- (void)willDismissMiniAlert;
- (void)willDisplayMiniAlert;
- (void)didDismissMiniAlert;
- (void)didDismissActionSheet;
- (void)applicationDidOrderOutContext:(id)arg1 screen:(id)arg2;
- (void)applicationWillOrderInContext:(id)arg1 windowLevel:(float)arg2 screen:(id)arg3;
- (void)frontDisplayDidChange:(id)arg1;
- (void)_setAmbiguousControlCenterActivationMargin:(float)arg1;
- (void)updateOrientationAndAccelerometerSettings;
- (void)updateProximitySettings;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
- (BOOL)expectsFaceContactInLandscape;
- (BOOL)expectsFaceContact;
- (void)setProximityEventsEnabled:(BOOL)arg1;
- (BOOL)proximityEventsEnabled;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2;
- (double)windowRotationDuration;
- (BOOL)_alertWindowShouldRotate;
- (id)displayIDForURLScheme:(id)arg1 isPublic:(BOOL)arg2;
- (void)_removeDefaultInterfaceOrientatationOverride;
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(NSInteger)arg1;
- (NSInteger)statusBarOrientation;
- (void)reportStatusBarOrientationAs:(NSInteger)arg1;
- (NSInteger)interfaceOrientationForCurrentDeviceOrientation;
- (NSInteger)_currentNonFlatDeviceOrientation;
- (void)updateNativeOrientationAndMirroredDisplays:(BOOL)arg1;
- (void)updateNativeOrientation;
- (void)setWantsOrientationEvents:(BOOL)arg1;
- (BOOL)_statusBarOrientationFollowsWindow:(id)arg1;
- (NSInteger)_frontMostAppOrientation;
- (void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)arg1;
- (void)popTransientActiveInterfaceOrientationForReason:(id)arg1;
- (void)pushTransientActiveInterfaceOrientation:(NSInteger)arg1 forReason:(id)arg2;
- (NSInteger)activeInterfaceOrientationWithoutConsideringAlerts;
- (NSInteger)activeInterfaceOrientation;
- (void)removeActiveOrientationObserver:(id)arg1;
- (void)addActiveOrientationObserver:(id)arg1;
- (void)noteAlertView:(id)arg1 willChangeInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;
- (void)noteInterfaceOrientationChanged:(NSInteger)arg1 duration:(float)arg2 updateMirroredDisplays:(BOOL)arg3 force:(BOOL)arg4;
- (void)noteInterfaceOrientationChanged:(NSInteger)arg1 duration:(float)arg2 updateMirroredDisplays:(BOOL)arg3;
- (void)noteInterfaceOrientationChanged:(NSInteger)arg1 duration:(float)arg2;
- (void)noteInterfaceOrientationChanged:(NSInteger)arg1 force:(BOOL)arg2;
- (void)noteInterfaceOrientationChanged:(NSInteger)arg1;
- (void)updateMirroredDisplayOrientation;
- (void)noteSubstantialTransitionOccured;
- (void)didReceiveMemoryWarning;
- (void)lockDevice:(GSEventRef)eventRef;
- (void)updateRejectedInputSettingsTriggeredByRouteChangeToReceiverNotification:(BOOL)arg1;
- (void)updateRejectedInputSettings;
- (void)updateRejectedInputSettingsForInCallState:(BOOL)arg1 isOutgoing:(BOOL)arg2;
- (void)_updateRejectedInputSettingsForInCallState:(BOOL)arg1 isOutgoing:(BOOL)arg2 triggeredbyRouteWillChangeToReceiverNotification:(BOOL)arg3;
- (void)_caseLatchWantsToAttemptLock;
- (void)noteCaseHardwarePresent;
- (void)_keyboardOrCaseLatchWantsToAttemptUnlock:(NSInteger)arg1;
- (BOOL)allowCaseLatchLockAndUnlock;
- (BOOL)caseIsEnabledAndLatched;
- (BOOL)smartCoverIsClosed;
- (void)_enqueueWorkspaceEvent:(id)arg1 withName:(void)arg2 ifSatisfiesCondition:(id)arg3 cancelingEventsWithNames:(id)arg4;
- (void)_smartCoverDidClose:(IOHIDEventRef)event;
- (void)_smartCoverDidOpen:(IOHIDEventRef)event;
- (void)_proximityChanged:(id)arg1;
- (void)resetIdleTimerAndUndim;
- (void)lockAfterCall;
- (void)noteBacklightFadeFinished;
- (void)noteBacklightLevelChanged;
- (void)noteBacklightControllerUndimming:(id)arg1;
- (void)_adjustMidnightTimerAfterSleep;
- (void)_midnightPassed;
- (void)setupMidnightTimer;
- (BOOL)_handlePhysicalButtonEvent:(id)arg1;
- (void)volumeChanged:(GSEventRef)arg1;
- (BOOL)_volumeChanged:(IOHIDEventRef)arg1;
- (id)appsRegisteredForVolumeEvents;
- (void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(BOOL)arg2;
- (void)setWantsVolumeButtonEvents:(BOOL)arg1;
- (BOOL)menuButtonInterceptAppEnabledForever;
- (id)menuButtonInterceptApp;
- (void)setMenuButtonInterceptApp:(id)arg1 forever:(BOOL)arg2;
- (BOOL)openURL:(id)arg1;
- (BOOL)canOpenURL:(id)arg1;
- (void)_openURLCore:(id)arg1 display:(id)arg2 animating:(BOOL)arg3 sender:(id)arg4 additionalActivationFlags:(id)arg5 activationHandler:(id)arg6;
- (void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(BOOL)arg4 animating:(BOOL)arg5 additionalActivationFlags:(id)arg6 activationHandler:(id)arg7;
- (void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(BOOL)arg4 animating:(BOOL)arg5 needsPermission:(BOOL)arg6 additionalActivationFlags:(id)arg7 activationHandler:(id)arg8;
- (void)applicationOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2;
- (void)applicationOpenURL:(id)arg1;
- (BOOL)applicationCanOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2;
- (BOOL)_URLIsHandledBySpringBoard:(id)arg1;
- (void)_applicationOpenURL:(id)arg1 event:(GSEventRef)arg2;
- (void)handleOpenURL:(id)arg1 fromApplication:(id)arg2;
- (BOOL)_requestPermissionToOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3;
- (void)showAlertForUnhandledURL:(id)arg1 error:(NSInteger)arg2;
- (NSInteger)currentHomescreenStatusBarStyle;
- (void)showSpringBoardStatusBar;
- (void)hideSpringBoardStatusBar;
- (BOOL)isSpringBoardStatusBarHidden;
- (NSInteger)statusBar:(id)arg1 styleForRequestedStyle:(NSInteger)arg2 overrides:(NSInteger)arg3;
- (BOOL)handleDoubleHeightStatusBarTap:(NSInteger)arg1;
- (void)applicationSuspendedSettingsUpdated:(GSEventRef)arg1;
- (void)applicationSuspended:(GSEventRef)arg1;
- (void)applicationSuspend:(GSEventRef)arg1;
- (void)anotherApplicationFinishedLaunching:(GSEventRef)arg1;
- (void)applicationExited:(GSEventRef)arg1;
- (void)quitTopApplication:(GSEventRef)arg1;
- (void)accessoryKeyStateChanged:(GSEventRef)arg1;
- (void)_updateRingerState:(NSInteger)arg1 withVisuals:(BOOL)arg2 updatePreferenceRegister:(BOOL)arg3;
- (void)ringerChanged:(NSInteger)arg1;
- (void)_ringerChanged:(IOHIDEventRef)arg1;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)pinPolicyChanged;
- (void)localeChanged;
- (void)_localeChanged;
- (void)_widgetHostingDefaultsDidChange;
- (void)debuggingAndDemoPrefsWereChanged;
- (void)loadDebuggingAndDemoPrefs;
- (BOOL)isDisplayIdentifierRestrictionDisabled:(id)arg1;
- (void)headsetAvailabilityChanged:(GSEventRef)arg1;
- (void)headsetButtonUp:(GSEventRef)arg1;
- (void)_headsetButtonUp:(IOHIDEventRef)arg1;
- (void)headsetButtonDown:(GSEventRef)arg1;
- (void)_headsetButtonDown:(IOHIDEventRef)arg1;
- (void)_setDeferredHeadsetButtonDownEvent:(IOHIDEventRef)arg1;
- (void)_imagesMounted;
- (void)_iapExtendedModeReset;
- (void)_iapServerConnectionDiedNotification:(id)arg1;
- (id)simpleRemoteDestinationApp;
- (void)_performDelayedHeadsetClickTimeout;
- (void)lockButtonUp:(GSEventRef)arg1;
- (void)_lockButtonUpFromSource:(NSInteger)arg1;
- (void)_clearPreheatedLockAudio;
- (void)_relaunchSpringBoardNow;
- (void)relaunchSpringBoard;
- (BOOL)relaunchingForSetupLanguageChange;
- (void)powerDownCanceled:(id)arg1;
- (void)_powerDownCancel:(id)arg1 withCompletion:(id)arg2;
- (void)powerDownRequested:(id)arg1;
- (BOOL)isPoweringDown;
- (void)powerDown;
- (void)reboot;
- (void)_rebootNow;
- (void)_powerDownNow;
- (void)extendButtonTimersForWake;
- (void)lockButtonWasHeld;
- (void)lockButtonDown:(GSEventRef)arg1;
- (void)_lockButtonDownFromSource:(NSInteger)arg1;
- (void)_handleMenuButtonEvent;
- (void)mediaKeyUp:(GSEventRef)arg1;
- (void)mediaKeyDown:(GSEventRef)arg1;
- (void)_startSeekWithDirection:(id)arg1;
- (void)_keyboardAvailabilityChanged;
- (void)_giveUpOnMenuDoubleTap;
- (void)menuButtonUp:(GSEventRef)arg1;
- (void)_menuButtonUp:(IOHIDEventRef)arg1;
- (void)_logMenuButtonHoldTime;
- (BOOL)_isDim;
- (void)menuButtonDown:(GSEventRef)arg1;
- (void)_menuButtonDown:(IOHIDEventRef)arg1;
- (id)_keyWindowForScreen:(id)arg1;
- (void)_handleHIDEvent:(IOHIDEventRef)arg1;
- (void)_logReliabilityInfoForEvent:(IOHIDEventRef)arg1;
- (BOOL)__handleHIDEvent:(IOHIDEventRef)arg1;
- (double)_menuHoldTime;
- (void)_menuButtonWasHeld;
- (void)clearMenuButtonTimer;
- (void)cancelMenuButtonRequests;
- (void)_setLockButtonTimer:(id)arg1;
- (void)_setMenuButtonTimer:(id)arg1;
- (void)handleMenuDoubleTap;
- (BOOL)isMenuDoubleTapAllowed;
- (void)setAppDisabledNowPlayingHUD:(BOOL)arg1 bundleIdentifier:(id)arg2;
- (BOOL)canShowLockScreenCameraGrabber;
- (BOOL)lockScreenCameraSupported;
- (BOOL)canShowLockScreenHUDControls;
- (BOOL)iapIsInExtendedMode;
- (BOOL)shouldRunFieldTestScript;
- (void)batteryStatusDidChange:(id)arg1;
- (void)significantTimeChange;
- (void)_significantTimeChange;
- (void)runFieldTestScript;
- (void)_testPhoneAlerts;
- (void)_lockdownActivationChanged:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)_reloadDemoAndDebuggingDefaultsAndCapabilities;
- (void)_effectiveSettingsDidChange;
- (void)showEDGEActivationFailureAlert:(id)arg1 reason:(id)arg2 forMMS:(BOOL)arg3;
- (void)wipeDeviceNow;
- (void)_rotateView:(id)arg1 toOrientation:(NSInteger)arg2;
- (void)requestDeviceUnlock;
- (void)languageChanged;
- (BOOL)restartedForLanguageChangeWhileUnlocked;
- (id)_settingLanguageStringForNewLanguage;
- (void)clearLaunchedAfterLanguageRestart;
- (BOOL)launchedAfterLanguageRestart;
- (void)appleIconViewRemoved;
- (void)_revealSpotlight;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_performDeferredLaunchWork;
- (void)_startBulletinBoardServer;
- (void)updateStackshotSettings;
- (void)setHardwareKeyboardLayoutName:(id)arg1;
- (void)handleKeyHIDEvent:(IOHIDEventRef)arg1;
- (BOOL)_shouldSwallowGSEvent:(GSEventRef)arg1;
- (BOOL)_shouldSwallowHIDEvent:(IOHIDEventRef)arg1;
- (void)writeLogFile;
- (void)_createLogFile;
- (void)handleSignal:(NSInteger)arg1;
- (id)init;
- (void)setNextAssistantRecognitionStrings:(id)arg1;
- (id)setNextVoiceRecognitionAudioInputPaths:(id)arg1;
- (void)_runControlCenterBringupTest;
- (void)_runControlCenterDismissTest;
- (void)_runScrollNotificationCenterTest:(id)arg1;
- (void)_runNotificationCenterBringupTest;
- (void)_runNotificationCenterDismissTest;
- (void)_runAppSliderBringupTest;
- (void)_runAppSliderDismissTest;
- (void)_runScrollAppSliderTest:(id)arg1;
- (void)_runDisplayAlertTest:(id)arg1;
- (void)_runScrollIconListTest;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)runRotationTest:(NSInteger)arg1;
- (void)endLaunchTest;
- (void)startResumeTestNamed:(id)arg1 options:(id)arg2;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2;
- (void)_retryLaunchTestWithOptions:(id)arg1;
- (void)_cameraPreviewStarted;
- (void)_workspaceTransactionCompleted:(id)arg1;
- (void)_unscatterWillBegin:(id)arg1;
- (void)_runUnlockTest;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)_alertSheetStackChanged;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;

@end

