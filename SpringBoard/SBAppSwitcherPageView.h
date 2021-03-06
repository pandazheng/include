/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIView<SBAppSwitcherPageContentView>;

@interface SBAppSwitcherPageView : UIView
{
    UIView *_shadowView;
    UIView *_hitTestBlocker;
    UIView<SBAppSwitcherPageContentView> *_view;
    UIView *_overlayView;
    int _orientation;
}

+ (CGFloat)_edgeBorderForOrientation:(int)arg1;
+ (struct CGSize)sizeForOrientation:(int)arg1;
+ (CGFloat)scale;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlayView;
@property(retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view; // @synthesize view=_view;
- (void)invalidate;
- (void)setShadowEnabled:(BOOL)arg1;
- (struct CGRect)_viewFrame;
- (struct CGAffineTransform)_transformForScale;
- (struct CGAffineTransform)_transformForOrientation:(int)arg1;
@property(nonatomic) CGFloat shadowAlpha;
- (void)setView:(id)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

