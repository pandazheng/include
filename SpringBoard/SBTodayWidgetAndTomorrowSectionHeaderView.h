/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBBulletinObserverSectionHeaderView.h"

@class SBNotificationCenterSeparatorView, UIImageView, UILabel;

@interface SBTodayWidgetAndTomorrowSectionHeaderView : SBBulletinObserverSectionHeaderView
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    SBNotificationCenterSeparatorView *_separatorView;
}

+ (id)defaultFont;
+ (id)defaultBackgroundColor;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

