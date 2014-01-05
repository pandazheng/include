/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBScaleZoomSettings.h"

@class SBFAnimationSettings;

@interface SBCrossfadeZoomSettings : SBScaleZoomSettings
{
    BOOL _morphWithZoom;
    SBFAnimationSettings *_morphSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBFAnimationSettings *morphSettings; // @synthesize morphSettings=_morphSettings;
@property BOOL morphWithZoom; // @synthesize morphWithZoom=_morphWithZoom;
- (id)effectiveMorphAnimationSettings;
- (void)setDefaultValues;

@end

