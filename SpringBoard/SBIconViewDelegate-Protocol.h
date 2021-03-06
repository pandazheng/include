/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class SBIconView, SBFolder, UITouch, SBIcon;
@protocol SBIconViewDelegate <NSObject>
@optional
- (CGFloat)iconLabelWidth;
- (BOOL)iconViewDisplaysCloseBox:(SBIconView *)iconView;
- (BOOL)iconViewDisplaysBadges:(SBIconView *)iconView;
- (void)iconCloseBoxTapped:(SBIconView *)iconView;
- (void)icon:(SBIconView *)iconView openFolder:(SBFolder *)folder animated:(BOOL)animated;
- (BOOL)icon:(SBIconView *)iconView canReceiveGrabbedIcon:(SBIcon *)grabbedIcon;
- (void)iconTapped:(SBIconView *)iconView;
- (BOOL)iconShouldAllowTap:(SBIconView *)iconView;
- (void)icon:(SBIconView *)iconView touchEnded:(BOOL)ended;
- (void)icon:(SBIconView *)iconView touchMoved:(UITouch *)touch;
- (void)iconTouchBegan:(SBIconView *)iconView;
- (void)iconHandleLongPress:(SBIconView *)iconView;
@end
