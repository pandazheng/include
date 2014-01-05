/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PLAssetContainerList.h"

@class NSString;

@protocol PLAlbumContainer <PLAssetContainerList>
@property(readonly, nonatomic) NSString *_typeDescription;
@property(readonly, nonatomic) NSString *_prettyDescription;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property(readonly, nonatomic) int filter;
@property(readonly, nonatomic) id albumsSortingComparator;
@property(readonly, nonatomic) unsigned long long albumsCount;
- (void)updateAlbumsOrderIfNeeded;
- (_Bool)needsReordering;
- (void)setNeedsReordering;
- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;
- (_Bool)canEditAlbums;
- (int)albumListType;
- (_Bool)hasAtLeastOneAlbum;
- (id)albums;
- (id)identifier;
@end

