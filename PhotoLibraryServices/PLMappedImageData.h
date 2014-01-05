/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSMutableData.h"

@class NSData, NSString, PLImageTableSegment;

@interface PLMappedImageData : NSMutableData
{
    PLImageTableSegment *_segment;
    void *_bytes;
    unsigned long long _length;
    _Bool _freeBytes;
    NSData *_pl_data;
}

- (void)dealloc;
- (_Bool)pl_writeToPath:(id)arg1;
- (unsigned long long)pl_advisoryLength;
@property(copy, nonatomic) NSString *photoUUID;
@property(nonatomic) unsigned int imageHeight;
@property(nonatomic) unsigned int imageWidth;
- (unsigned long long)lengthIncludingFooter;
- (unsigned long long)length;
- (void *)mutableBytes;
- (const void *)bytes;
- (struct PLImageTableEntryFooter_s *)_footer;
- (id)brokencopy;
- (id)initWithEntryLength:(unsigned long long)arg1;
- (id)initWithThumbnailPath:(id)arg1;
- (id)initWithImageTableSegment:(id)arg1 bytes:(void *)arg2 length:(unsigned long long)arg3;

@end

