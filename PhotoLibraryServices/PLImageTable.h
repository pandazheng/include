/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLThumbPersistenceManager.h"

@class NSDictionary, NSMutableArray, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSString;

@interface PLImageTable : NSObject <PLThumbPersistenceManager>
{
    int _format;
    NSString *_path;
    struct CGSize _thumbnailSize;
    int _imageRowBytes;
    int _imageLength;
    int _entryLength;
    _Bool _readOnly;
    _Bool _dying;
    int _fid;
    long long _fileLength;
    long long _entryCount;
    unsigned long long _segmentLength;
    unsigned long long _segmentCount;
    NSMutableArray *_allSegments;
    NSMutableIndexSet *_preheatIndexes;
    NSObject<OS_dispatch_queue> *_preheatIndexIsolation;
    NSObject<OS_dispatch_queue> *_preheatQueue;
}

+ (void)writeImage:(id)arg1 toData:(id *)arg2 thumbnailFormat:(int)arg3 videoDuration:(id)arg4 width:(int *)arg5 height:(int *)arg6 bytesPerRow:(int *)arg7 dataWidth:(int *)arg8 dataHeight:(int *)arg9 dataOffset:(int *)arg10;
+ (void)releaseSegmentCache;
@property(readonly, nonatomic) int imageLength; // @synthesize imageLength=_imageLength;
@property(readonly, nonatomic) int imageRowBytes; // @synthesize imageRowBytes=_imageRowBytes;
@property(readonly, nonatomic) int imageFormat; // @synthesize imageFormat=_format;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)preheatItemForAsset:(id)arg1 options:(unsigned int)arg2;
- (id)imageDataAtIndex:(unsigned long long)arg1 width:(int *)arg2 height:(int *)arg3 bytesPerRow:(int *)arg4 dataWidth:(int *)arg5 dataHeight:(int *)arg6 dataOffset:(int *)arg7;
- (void)preheatImageDataAtIndex:(unsigned long long)arg1;
- (void)preheatImageDataAtIndexes:(id)arg1;
- (void)_doPreheat;
- (id)_getAndClearPreheatIndexes;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (id)_debugDescription;
- (void)finishUnicornEntryAtIndex:(unsigned long long)arg1 withImageData:(id)arg2 imageSize:(struct CGSize)arg3 asset:(id)arg4;
- (void)setImageDataForEntry:(const void *)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 asset:(id)arg4;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5;
@property(readonly, nonatomic) struct CGSize imageSize;
- (void)_verifyThumbnailDataForIndex:(unsigned long long)arg1 uuid:(id)arg2;
- (void)compactWithOccupiedIndexes:(id)arg1;
- (id)preflightCompactionWithOccupiedIndexes:(id)arg1;
- (_Bool)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id *)arg2;
@property(readonly, nonatomic) NSDictionary *photoUUIDToIndexMap;
- (_Bool)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2;
- (void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)_flushEntryAtAddress:(void *)arg1;
- (void)_flushEntryAtAddress:(void *)arg1 count:(int)arg2;
- (void)_addEntriesIfNecessaryForIndex:(long long)arg1;
- (void)_setEntryCount:(long long)arg1;
- (long long)entryCount;
- (void)_adviseWillNeedEntriesInRange:(struct _NSRange)arg1;
- (id)dataForEntryAtIndex:(unsigned long long)arg1 createIfNeeded:(_Bool)arg2;
- (void)_updateSegmentCount;
- (void)_reloadSegmentAtIndex:(long long)arg1;
- (void)_releaseSegment:(id)arg1;
- (void)_releaseSegmentAtIndex:(long long)arg1;
- (id)_segmentAtIndex:(long long)arg1;
- (_Bool)usesThumbIdentifiers;
@property(readonly, nonatomic) _Bool isReadOnly;
- (unsigned long long)_segmentLength;
- (int)_fileDescriptor;
- (void)dealloc;
@property(readonly, nonatomic) int imageHeight;
@property(readonly, nonatomic) int imageWidth;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(_Bool)arg3;

@end

