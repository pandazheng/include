/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLCloudFeedEntry.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry
{
}

+ (id)entityName;
- (_Bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableEntryComments;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableEntryLikeComments;

// Remaining properties
@property(retain, nonatomic) NSString *entryCloudAssetGUID; // @dynamic entryCloudAssetGUID;
@property(retain, nonatomic) NSOrderedSet *entryComments; // @dynamic entryComments;
@property(retain, nonatomic) NSOrderedSet *entryLikeComments; // @dynamic entryLikeComments;

@end

