/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIButton, _UIBackdropView;

@interface PLVideoOverlayButton : UIView
{
    UIButton *_button;
    _UIBackdropView *_backdropView;
    id _target;
    SEL _action;
    long long _style;
}

@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)_playButtonTapped:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonActivate:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end

