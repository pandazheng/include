/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface _PLPlaceholderThumbnailCachedData : NSObject
{
    NSData *_imageData;
    int _width;
    int _height;
    int _bytesPerRow;
    int _dataWidth;
    int _dataHeight;
    int _imageDataOffset;
}

- (void)dealloc;
- (id)imageDataWithWidth:(int *)arg1 height:(int *)arg2 bytesPerRow:(int *)arg3 dataWidth:(int *)arg4 dataHeight:(int *)arg5 imageDataOffset:(int *)arg6;
- (id)initWithImageData:(id)arg1 width:(int)arg2 height:(int)arg3 bytesPerRow:(int)arg4 dataWidth:(int)arg5 dataHeight:(int)arg6 imageDataOffset:(int)arg7;

@end

