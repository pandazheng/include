/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSDate, UIColor, UILabel, _UILegibilityLabel, _UILegibilitySettings;

@interface SBFLockScreenDateView : UIView
{
    UILabel *_timeLabel;
    UILabel *_dateLabel;
    _Bool _useLegibilityLabels;
    _UILegibilityLabel *_legibilityTimeLabel;
    _UILegibilityLabel *_legibilityDateLabel;
    double _timeAlpha;
    double _dateAlpha;
    NSDate *_date;
    id <SBFLockScreenDateFormatter> _formatter;
    _UILegibilitySettings *_legibilitySettings;
    double _timeStrength;
    double _dateStrength;
    UIColor *_textColor;
    double _dateAlphaPercentage;
}

+ (double)defaultHeight;
@property(nonatomic) double dateAlphaPercentage; // @synthesize dateAlphaPercentage=_dateAlphaPercentage;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double dateStrength; // @synthesize dateStrength=_dateStrength;
@property(nonatomic) double timeStrength; // @synthesize timeStrength=_timeStrength;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) id <SBFLockScreenDateFormatter> formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (double)_dateBaselineOffsetFromTime;
- (id)_dateFont;
- (id)_timeFont;
- (void)_layoutTimeLabel;
- (void)_layoutDateLabel;
- (void)layoutSubviews;
- (void)_useLegibilityLabels:(_Bool)arg1;
- (double)_effectiveDateAlpha;
- (void)_updateLabelAlpha;
- (void)_setDateAlpha:(double)arg1;
- (void)_updateLabels;
- (void)_addLabels;
- (void)_updateLegibilityLabels;
- (double)dateBaselineOffsetFromOrigin;
- (double)timeBaselineOffsetFromOrigin;
- (void)updateFormat;
- (void)setContentAlpha:(double)arg1 withDateVisible:(_Bool)arg2;
@property(nonatomic, getter=isDateHidden) _Bool dateHidden;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

