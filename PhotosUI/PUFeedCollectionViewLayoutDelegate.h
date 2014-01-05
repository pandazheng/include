/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PUFeedCollectionViewLayoutDelegate <UICollectionViewDelegate>
@required
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(int)arg3;
-(int)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(int)arg3;
-(UIEdgeInsets*)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(int)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4;
-(id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(float*)arg3 minimumNumberOfTilesToOmit:(int*)arg4 forSection:(int)arg5;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4;
-(PUFeedSeparatorMetrics*)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(PUFeedSeparatorMetrics)arg5;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(int)arg3;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(int)arg3 withSection:(int)arg4;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(int)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(CGSize)arg4;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(int)arg3 proposedSize:(CGSize)arg4;
-(PUFeedSeparatorMetrics*)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(int)arg3 andSection:(int)arg4 proposedMetrics:(PUFeedSeparatorMetrics)arg5;
-(id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(int)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(CGSize)arg4;
-(float)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(int)arg3 andHeaderForGroupID:(id)arg4;
@end

