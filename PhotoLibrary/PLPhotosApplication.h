/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIApplication.h>
#import <MessageUI/MessageUI.h>

#import "PLDebugViewControllerDelegate-Protocol.h"
#import "PLPublishingAgentDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, PLDebugViewController, PLLibraryImageDataProvider, PLUIController, UIViewController, UIWindow;

@interface PLPhotosApplication : UIApplication <PLDebugViewControllerDelegate, UIApplicationDelegate, PLPublishingAgentDelegate, MFMailComposeViewControllerDelegate>
{
    PLUIController *_uiController;
    int _delaySuspendCount;
    int _sendingEmailCount;
    _Bool _receivingRemoteControlEvents;
    _Bool _wantsToSuspend;
    unsigned long long _backgroundTaskIdentifier;
    _Bool _isRemaking;
    _Bool _cameraCancelledRemaking;
    UIWindow *_window;
    PLLibraryImageDataProvider *_imageDataProvider;
    NSMutableSet *_publishingAgents;
    NSMutableDictionary *_publishingAgentsByMediaItem;
    int _enableNetworkingFlagsCount;
    NSString *_trimmedFilePath;
    UIViewController *_composeParentViewController;
    _Bool _composeSheetIsReady;
    _Bool _inactiveUnderTaskSwitcher;
    _Bool _urlNeedsHandling;
    _Bool _shouldCancelPublishAfterRemaking;
    int _observeForRechabilityChanges;
    _Bool _isReachable;
    _Bool _isOnWifi;
    int _observeForiMessageAvailability;
    _Bool _photoStreamIsBusy;
    _Bool _sharedPhotoStreamIsBusy;
    int _photoStreamActivityToken;
    int _sharedPhotoStreamActivityToken;
    int _sharedPhotoStreamInvitationFailureToken;
    PLDebugViewController *_debugViewController;
    NSString *_currentTestName;
    NSDictionary *_currentTestOptions;
}

+ (void)initialize;
@property(retain, nonatomic) NSDictionary *currentTestOptions; // @synthesize currentTestOptions=_currentTestOptions;
@property(retain, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;
@property(readonly, nonatomic) _Bool isOnWifi; // @synthesize isOnWifi=_isOnWifi;
@property(readonly, nonatomic) _Bool isReachable; // @synthesize isReachable=_isReachable;
- (void)debugViewControllerDidDismiss:(id)arg1;
- (void)_statusBarDoubleTap:(id)arg1;
- (void *)getSharedAddressBook;
- (void)_updateSharedPhotoStreamProgressDisplay;
- (void)_updatePhotoStreamProgressDisplay;
- (void)_updateNetworkActivityIndicatorAsync;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_registerForPhotoStreamActivityNotifications;
- (_Bool)shouldAllowSBAlertSupression;
- (_Bool)isiMessageEnabed;
- (void)disableObservingForiMessageAvailability;
- (void)enableObservingForiMessageAvailability;
- (void)_stopObservingForiMessageAvailability;
- (void)_startObservingForiMessageAvailability;
- (void)disableNetworkObservation;
- (void)enableNetworkObservation;
- (void)_stopObservingReachabilityChanges;
- (void)_startObservingReachabilityChanges;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)setReceivingRemoteControlEvents:(_Bool)arg1;
- (void)mailComposeController:(id)arg1 bodyFinishedLoadingWithResult:(_Bool)arg2 error:(id)arg3;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
@property(nonatomic, assign) id <NSCoding> autosaveIdentifier;
- (void)_cancelPublish;
- (void)_showAlertForInterruptionDuringRemaking;
- (void)_cancelRemaking;
- (void)_cleanUpPendingRemakingAndPublishIfNeeded;
- (_Bool)visitViewControllersWithBlock:(id)arg1;
- (void)dismissPublishingViewControllers;
- (void)_setComposeParentViewController:(id)arg1;
- (void)_dismissMailComposeController;
- (void)_autosaveMailComposition;
- (void)_discardTrimmedFile;
- (void)_showMailComposeSheetForAutosavedMessageWithIdentifier:(id)arg1;
- (_Bool)isComposingEmail;
- (_Bool)isComposeSheetReady;
- (void)composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2 parentViewController:(id)arg3;
- (id)composeMailForPhotoData:(id)arg1 attachmentName:(id)arg2 withMimeType:(id)arg3 extension:(id)arg4 parentViewController:(id)arg5;
- (void)presentMailComposeController:(id)arg1 parentViewController:(id)arg2;
- (id)newMailComposeViewControllerWithPhotoData:(id)arg1 attachmentName:(id)arg2 withMimeType:(id)arg3 extension:(id)arg4 identifier:(id *)arg5;
- (void)composeMailForPhotos:(id)arg1 parentViewController:(id)arg2;
- (void)setStatusBarStyleIfNecessary:(long long)arg1;
- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(_Bool)arg2;
- (void)publishingAgentDidStartRemaking:(id)arg1;
- (id)publishingAgentForMediaItem:(id)arg1;
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
- (void)cleanStateAfterPublishForAgent:(id)arg1;
- (void)_discardMediaFilesForPublishingAgentsIfNeeded;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)addPublishingAgent:(id)arg1;
- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;
- (void)setEnableNetworkingFlags:(_Bool)arg1;
- (void)_clearPublishingSheetResponders;
- (id)imageDataProvider;
- (void)_updateSuspensionSettings;
- (_Bool)applicationSuspend:(struct __GSEvent *)arg1 settings:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)photosPreferencesChanged;
- (id)currentUIConfiguration;
- (_Bool)useCompatibleSuspensionAnimation;
- (void)_finishExtendedTest;
- (id)_extendLaunchTest;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)sharedFinishedLaunching:(_Bool)arg1;
- (id)rootViewController;
- (id)mainWindow;
- (void)_setImageOptions;
@property(nonatomic) _Bool sendingEmail;
- (void)setDelaySuspend:(_Bool)arg1;
- (void)setIsRemaking:(_Bool)arg1;
- (_Bool)isCameraApp;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;

@end

