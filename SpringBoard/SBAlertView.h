/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class SBAlert;

@interface SBAlertView : UIView
{
    SBAlert *_alert;
    unsigned int _shouldAnimateIn:1;
}

- (void)alertWindowViewControllerResizedFromContentFrame:(struct CGRect)arg1 toContentFrame:(struct CGRect)arg2;
- (void)setAlert:(id)arg1;
- (BOOL)shouldAddClippingViewDuringRotation;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)isSupportedInterfaceOrientation:(int)arg1;
- (void)layoutForInterfaceOrientation:(int)arg1;
- (BOOL)isAnimatingOut;
- (BOOL)shouldAnimateIn;
- (void)setShouldAnimateIn:(BOOL)arg1;
- (BOOL)isReadyToBeRemovedFromView;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)dismiss;
- (id)alert;
- (id)initWithFrame:(struct CGRect)arg1;

@end

