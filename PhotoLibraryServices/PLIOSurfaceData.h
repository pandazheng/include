/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSData.h"

@interface PLIOSurfaceData : NSData
{
    struct __IOSurface *_surface;
    const void *_bytes;
    unsigned long long _length;
}

+ (id)dataWithIOSurface:(void *)arg1;
- (void)dealloc;
- (const void *)bytes;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIOSurface:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithIOSurface:(void *)arg1;

@end

