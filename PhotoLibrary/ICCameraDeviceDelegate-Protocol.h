/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ICDeviceDelegate.h"

@protocol ICCameraDeviceDelegate <ICDeviceDelegate>

@optional
- (void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didReceiveThumbnail:(struct CGImage *)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
- (void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
@end

