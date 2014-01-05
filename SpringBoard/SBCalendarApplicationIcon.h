/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBApplicationIcon.h"

@interface SBCalendarApplicationIcon : SBApplicationIcon
{
}

+ (id)countriesRequiringBlackDayOfWeek;
- (void)_drawIconIntoCurrentContextWithImageSize:(struct CGSize)arg1 iconBase:(id)arg2;
- (id)numberFont;
- (id)colorForDayOfWeek;
- (BOOL)isBlackDayOfWeekRequiredForLocale:(id)arg1;
- (BOOL)canGenerateImageInBackgroundForFormat:(int)arg1;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (void)localeChanged;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

@end

