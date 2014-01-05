/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UILabel;

@interface CAMSlalomIndicatorView : UIView
{
    long long _framesPerSecond;
    UILabel *__framerateLabel;
}

@property(readonly, nonatomic) UILabel *_framerateLabel; // @synthesize _framerateLabel=__framerateLabel;
@property(nonatomic) long long framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
- (void)_updateFramerateLabel;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMSlalomIndicatorViewInitialization;

@end

