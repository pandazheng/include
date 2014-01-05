/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLPreheatItem.h>

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, UIImage;

@interface _PLJPEGPreheatItem : PLPreheatItem
{
    NSString *_imagePath;
    NSObject<OS_dispatch_queue> *_queue;
    UIImage *_cachedImage;
    unsigned long long _requestID;
    NSObject<OS_dispatch_group> *_requestGroup;
    NSObject<OS_dispatch_group> *_waitGroup;
}

- (void)cancelPreheatRequest;
- (void)startPreheatRequest;
- (void)_cacheImage;
- (_Bool)addImageHandler:(id)arg1;
- (id)cachedImageIfAvailable;
- (id)cachedImage;
- (void)dealloc;
- (id)initWithImagePath:(id)arg1;

@end

