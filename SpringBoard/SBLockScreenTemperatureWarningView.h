/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBLockOverlayView.h"

@class UIImageView;

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView
{
    UIImageView *_warningIconView;
}

- (void)layoutSubviews;
- (CGFloat)_iconYPosition;
- (CGFloat)_subtitleBaseline;
- (CGFloat)_titleBaseline;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

