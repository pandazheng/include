/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileManager, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface PLSimpleDCIMDirectory : NSObject
{
    NSURL *_baseURL;
    NSString *_subDirSuffix;
    unsigned long long _directoryLimit;
    NSFileManager *_fileManager;
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_currentSubDirectory;
    unsigned long long _currentSubDirectoryNumber;
    NSString *_userInfoPath;
    _Bool _hasLoadedUserInfo;
    _Bool _representsCameraRoll;
    NSObject<OS_dispatch_queue> *_isolation;
}

+ (id)cloudPlistName;
+ (id)cameraRollPlistName;
+ (id)migrateOldPlistToNewPlist:(id)arg1;
@property(readonly) NSURL *directoryURL; // @synthesize directoryURL=_baseURL;
@property _Bool representsCameraRoll; // @synthesize representsCameraRoll=_representsCameraRoll;
- (void)reset;
- (id)nextAvailableFileURLWithExtension:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4;

@end

