/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBAlert.h"

#import "SBPowerDownViewDelegate.h"

@class SBAlertView<SBPowerDownViewInterface>;

@interface SBPowerDownController : SBAlert <SBPowerDownViewDelegate>
{
    id _delegate;
    BOOL _isFront;
    SBAlertView<SBPowerDownViewInterface> *_powerDownView;
    id _orderOutCompletion;
}

+ (id)sharedInstance;
@property(nonatomic) id <SBPowerDownControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) id orderOutCompletion; // @synthesize orderOutCompletion=_orderOutCompletion;
- (void)_lockedOnTop;
- (void)_restoreIconListIfNecessary;
- (void)powerDownViewAnimateOutCompleted:(id)arg1;
- (void)powerDownViewRequestPowerDown:(id)arg1;
- (void)powerDownViewRequestCancel:(id)arg1;
- (BOOL)powerDownViewShouldHideStatusBar:(id)arg1;
- (double)autoLockTime;
- (void)deactivate;
- (void)activate;
- (BOOL)showsSpringBoardStatusBar;
- (BOOL)managesOwnStatusBarAtActivation;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (BOOL)hasTranslucentBackground;
- (void)cancel;
- (void)powerDown;
- (void)orderOutWithCompletion:(id)arg1;
- (void)orderFront;
- (BOOL)isOrderedFront;
- (void)dealloc;
- (id)init;

@end

