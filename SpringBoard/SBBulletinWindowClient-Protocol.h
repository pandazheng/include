/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol SBBulletinWindowClient <NSObject>
- (void)bulletinWindowDidRotateFromOrientation:(int)arg1;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)arg1 duration:(double)arg2;
- (void)bulletinWindowWillRotateToOrientation:(int)arg1 duration:(double)arg2;

@optional
- (void)bulletinWindowDidResignKey;
- (void)bulletinWindowDidBecomeKey;
- (BOOL)requiresKeyWindow;
@end

