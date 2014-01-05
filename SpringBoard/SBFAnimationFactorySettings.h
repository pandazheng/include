/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/_UISettings.h>

@interface SBFAnimationFactorySettings : _UISettings
{
    BOOL _slowAnimations;
    float _slowDownFactor;
    float _springMassFactor;
    float _springStiffnessFactor;
    float _springDampingFactor;
}

+ (id)settingsControllerModule;
@property(nonatomic) float springDampingFactor; // @synthesize springDampingFactor=_springDampingFactor;
@property(nonatomic) float springStiffnessFactor; // @synthesize springStiffnessFactor=_springStiffnessFactor;
@property(nonatomic) float springMassFactor; // @synthesize springMassFactor=_springMassFactor;
@property(nonatomic) float slowDownFactor; // @synthesize slowDownFactor=_slowDownFactor;
@property(nonatomic) BOOL slowAnimations; // @synthesize slowAnimations=_slowAnimations;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setDefaultValues;

@end

