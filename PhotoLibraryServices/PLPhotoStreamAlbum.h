/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum
{
}

+ (id)keyPathsForValuesAffectingPersonID;
+ (id)entityName;
+ (id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(_Bool)arg3;
+ (id)entityInManagedObjectContext:(id)arg1;
- (void)addAssetOrderedByDataTaken:(id)arg1;
- (void)enforceImageLimitIfNecessary;
- (_Bool)shouldDeleteWhenEmpty;
@property(retain, nonatomic) NSString *personID;
- (void)awakeFromInsert;

@end

