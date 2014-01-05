/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification
{
    _Bool _invitationRecordsDidChange;
    NSDictionary *_userInfo;
}

+ (id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2;
- (void)_calculateDiffs;
@property(readonly, nonatomic) PLGenericAlbum *album;
- (id)name;
@property(readonly, nonatomic) _Bool invitationRecordsDidChange;
- (id)userInfo;

@end

