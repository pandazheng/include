/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext
{
}

+ (_Bool)canMergeRemoteChanges;
+ (_Bool)useModelMigratorToCreateDatabase;
- (void)disconnectFromChangeHub;
- (void)connectToChangeHub;

@end

