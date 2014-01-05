/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob
{
    NSDictionary *_metadata;
}

+ (void)updateAlbumMetadata:(id)arg1;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (id)_argumentsDictionaryFromXPCEvent:(id)arg1;
- (id)_argumentsDictionaryAsData:(id)arg1;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (void)dealloc;
- (id)initFromXPCObject:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;

@end

