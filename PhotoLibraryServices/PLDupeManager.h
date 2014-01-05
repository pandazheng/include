/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, PLPhotoLibrary;

@interface PLDupeManager : NSObject
{
    NSMutableArray *_normalAssetsObjectIDsToAnalyze;
    NSMutableDictionary *_cloudAssetsToAnalyze;
    NSMutableArray *_assetsWithUpdatedVisibility;
    _Bool _doneWithCloudAssets;
    _Bool _isRebuilding;
    NSMutableSet *_normalInserts;
    NSMutableSet *_cloudInserts;
    PLPhotoLibrary *_photoLibrary;
    long long _once;
    long long _pauseCount;
    double _rebuildStartTime;
}

+ (_Bool)_computeHashForAsset:(id)arg1;
+ (id)hashForAsset:(id)arg1;
+ (void)_setPlaceHolderHashOnAsset:(id)arg1;
+ (id)placeholderHash;
+ (id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2;
+ (_Bool)resetDupesAnalysisForOfflineStore:(id)arg1 resetHashes:(_Bool)arg2;
+ (_Bool)_resetDupesAnalysisInManagedObjectContext:(id)arg1 resetHashes:(_Bool)arg2;
+ (id)sharedInstance;
- (void)resumeAnalysis;
- (void)pauseAnalysis;
- (void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(id)arg2;
- (void)launchDupeAnalysisIfNeeded;
- (void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(id)arg3;
- (void)_analyzeDupes;
- (void)_continueAnalysis;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1;
- (_Bool)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1;
- (void)resetDupesAnalysisResetHashes:(_Bool)arg1;
- (void)_analyzeDupesForRebuild;
- (void)_continueAnalysisForRebuildOrPause;
- (void)_continueAnalysisForRebuild;
- (void)_performAnalysisTransaction:(id)arg1 completionHandler:(void)arg2;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1;
- (short)_computeAssetHashesForManagedObjectContext:(id)arg1;
- (short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1;
- (void)_analyzeDupeForNormalAsset:(id)arg1;
- (void)_removeCloudAssetFromAnalysis:(id)arg1;
- (id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2;
- (_Bool)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1;
- (void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2;
- (void)_noteAssetVisibilityDidChange:(id)arg1;
- (short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)dealloc;

@end

